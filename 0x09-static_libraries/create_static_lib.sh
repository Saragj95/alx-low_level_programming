#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -name "*.c")

# Compile the .c files into object files
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c "$file" -o "$object_file"
done

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o
