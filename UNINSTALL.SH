#!/bin/bash

# Define the installation directory
INSTALL_DIR="/usr/local/bin"

# Define the name of your helper program
HELPER_NAME="linux_helper"

# Remove the installed program
sudo rm -rf "$INSTALL_DIR/$HELPER_NAME"

echo "Uninstallation complete. '$HELPER_NAME' has been removed."

