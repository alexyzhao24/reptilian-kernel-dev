#!/bin/bash
# Shell script to configure Host-to-Guest SSH Port Forwarding in VirtualBox

VM_NAME="ReptilianOS"
HOST_PORT=2222
GUEST_PORT=22

echo "Configuring SSH port forwarding for VM: $VM_NAME..."
VBoxManage modifyvm "$VM_NAME" --natpf1 "guestssh,tcp,,$HOST_PORT,,$GUEST_PORT"

echo "Setup complete! Connect via: ssh -p $HOST_PORT <username>@localhost"