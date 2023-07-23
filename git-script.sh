#!/bin/bash

# Prompt for the files to add
read -p "Enter the files you want to add (separated by spaces): " files

# Prompt for the commit message
read -p "Enter the commit message: " message

# Split the input into an array of files
IFS=' ' read -r -a file_array <<< "$files"

# Add each file
for file in "${file_array[@]}"
do
    git add "$file"
done

# Commit with the provided message
git commit -m "$message"

# Push the changes
git push
