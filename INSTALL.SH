#!/bin/bash

# Define the installation directory
INSTALL_DIR="/usr/local/bin"

# Define the name of your helper program
HELPER_NAME="linux_helper"

# Copy the helper program to the installation directory
cp "$HELPER_NAME" "$INSTALL_DIR"

# Add execute permissions to the installed program
sudo chmod +x "$INSTALL_DIR/$HELPER_NAME"

echo "Installation complete. You can now use '$HELPER_NAME' to run your helper program."

