// Conway's Game of Life running bare-metal on PicoRV32
// This is free and unencumbered software released into the public domain.

#include "firmware.h"

#define COLS 24
#define ROWS 10
#define GENS 20

static char grid[ROWS][COLS];
static char next_grid[ROWS][COLS];

static void game_init(void)
{
	int r, c;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			grid[r][c] = 0;

	// Glider (top-left area)
	grid[1][2] = 1;
	grid[2][3] = 1;
	grid[3][1] = 1;
	grid[3][2] = 1;
	grid[3][3] = 1;

	// Blinker (top-right area)
	grid[1][14] = 1;
	grid[1][15] = 1;
	grid[1][16] = 1;

	// Stable block (bottom-right)
	grid[7][19] = 1;
	grid[7][20] = 1;
	grid[8][19] = 1;
	grid[8][20] = 1;

	// R-pentomino (middle)
	grid[4][10] = 1;
	grid[4][11] = 1;
	grid[5][9]  = 1;
	grid[5][10] = 1;
	grid[6][10] = 1;
}

static int neighbors(int r, int c)
{
	int count = 0;
	int dr, dc;
	for (dr = -1; dr <= 1; dr++) {
		for (dc = -1; dc <= 1; dc++) {
			if (dr == 0 && dc == 0) continue;
			int nr = r + dr;
			int nc = c + dc;
			if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS)
				count += grid[nr][nc];
		}
	}
	return count;
}

static void game_step(void)
{
	int r, c, n;
	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			n = neighbors(r, c);
			if (grid[r][c])
				next_grid[r][c] = (n == 2 || n == 3) ? 1 : 0;
			else
				next_grid[r][c] = (n == 3) ? 1 : 0;
		}
	}
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			grid[r][c] = next_grid[r][c];
}

static void game_print(int gen)
{
	int r, c;
	print_str("Gen ");
	print_dec((unsigned int)gen);
	print_str("\n+");
	for (c = 0; c < COLS; c++) print_chr('-');
	print_str("+\n");
	for (r = 0; r < ROWS; r++) {
		print_chr('|');
		for (c = 0; c < COLS; c++)
			print_chr(grid[r][c] ? '#' : ' ');
		print_str("|\n");
	}
	print_str("+");
	for (c = 0; c < COLS; c++) print_chr('-');
	print_str("+\n");
}

void game(void)
{
	int g;
	print_str("\n=== Conway's Game of Life on PicoRV32 ===\n");
	game_init();
	for (g = 0; g < GENS; g++) {
		game_print(g);
		game_step();
	}
	print_str("=== Done! ===\n\n");
}
