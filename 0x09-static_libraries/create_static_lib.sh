#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library
ar rcs liball.a *.o

# Clean up object files
rm -f *.o
