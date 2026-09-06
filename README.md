# Reptilian OS Kernel Development & Virtualization Lab

A low-level operating systems engineering repository documenting kernel compilation, custom virtualization setup, and system-level configuration for the Reptilian OS environment.

## Project Overview
This project focuses on low-level operating system fundamentals, kernel-space development, and virtual machine environment management. Built as part of advanced computer science coursework at the University of Florida, this lab covers compiling custom Linux kernels from source, managing system-level networking, and establishing reproducible development environments.

## 🛠️ Key Technical Highlights
* **Kernel Compilation:** Successfully configured and compiled a custom Linux kernel from source for the Reptilian OS environment.
* **Virtualization & Snapshots:** Configured a tailored VirtualBox guest environment (Ubuntu/Debian) and implemented VM snapshot workflows for incremental state management and testing isolation.
* **Networking & Access:** Set up SSH port forwarding rules between host and guest systems to enable secure, remote headless terminal control.
* **Toolchain & Environment:** Built using native GNU toolchains (`gcc`, `make`), Linux CLI utilities, and low-level system debugging tools.

## Environment Setup & Build Instructions

### Prerequisites
* VirtualBox 7.x+
* GCC & GNU Make toolchain
* Linux kernel build dependencies (`flex`, `bison`, `libssl-dev`, `libelf-dev`)

### 1. Host-to-Guest SSH Setup
Configure SSH port forwarding on VirtualBox to communicate with the guest VM:
```bash
# Forward host port 2222 to guest port 22
VBoxManage modifyvm "ReptilianOS" --natpf1 "ssh,tcp,,2222,,22"
ssh -p 2222 user@localhost
