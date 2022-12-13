#!/bin/bash

# Get all the C files in the current directory
files=$(ls *.c)

# Compile the C files into object files
for file in $files
do
  gcc -c $file
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o
