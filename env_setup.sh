#!/bin/bash

# Define name of venv 
venv_name="liveenv" 

# Check if the virtual environment directory exists
if [ ! -d "$venv_name" ]; then
    echo "Creating a new virtual environment: $venv_name"
    python3 -m venv "$venv_name"
fi


# Activate the virtual environment 
source "$venv_name/bin/activate"

#Install the packages 
if [ -f "requirements.txt" ];then
    echo "Installing packages from requirements.txt "
    pip install -r requirements.txt
else 
    echo "requirements.txt not found. No packages were installed."
fi 

# Ask if the user wants to deactivate the virtual environment
read -p "Do you want to deactivate the virtual environment (y/n)? " -n 1 -r
echo  # Add a newline for better output formatting
if [[ $REPLY =~ ^[Yy]$ ]]; then
    deactivate
    echo "Virtual environment deactivated."
else
    echo "Virtual environment is still active. You can deactivate it manually using 'deactivate'."
fi
