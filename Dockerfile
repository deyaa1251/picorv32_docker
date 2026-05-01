FROM ubuntu:24.04

# Avoid interactive prompts during package install
ENV DEBIAN_FRONTEND=noninteractive

# Install system dependencies
RUN apt-get update && apt-get install -y \
    iverilog \
    python3 \
    make \
    curl \
    ca-certificates \
    && rm -rf /var/lib/apt/lists/*

# Install xPack RISC-V toolchain — picks the right binary for amd64 or arm64
ARG TARGETARCH
RUN if [ "$TARGETARCH" = "arm64" ]; then XARCH="linux-arm64"; else XARCH="linux-x64"; fi && \
    curl -fsSL \
    "https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v14.2.0-3/xpack-riscv-none-elf-gcc-14.2.0-3-${XARCH}.tar.gz" \
    | tar -xz -C /opt/

ENV PATH="/opt/xpack-riscv-none-elf-gcc-14.2.0-3/bin:$PATH"

# Copy the picorv32 source
WORKDIR /workspace
COPY . .

# Pre-build firmware and testbench so attendees can run tests immediately
RUN make firmware/firmware.hex && \
    make testbench.vvp

# Friendly welcome message
RUN echo 'echo ""' >> /etc/bash.bashrc && \
    echo 'echo "=== PicoRV32 RISC-V Workshop ==="' >> /etc/bash.bashrc && \
    echo 'echo "Try: make test        — run full simulation"' >> /etc/bash.bashrc && \
    echo 'echo "     make test_vcd    — run + generate waveform"' >> /etc/bash.bashrc && \
    echo 'echo "     make test_wb     — run Wishbone interface test"' >> /etc/bash.bashrc && \
    echo 'echo "     make test_axi    — run AXI4-Lite interface test"' >> /etc/bash.bashrc && \
    echo 'echo ""' >> /etc/bash.bashrc

CMD ["bash"]
