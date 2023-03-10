#!/bin/bash

# This script creates the starter files for the project: Even more pointers_arrays_strings
mkdir 0x09-static_libraries
cd 0x09-static_libraries

# Create readme file
touch README.md
echo "# C - Static Libraries" >> README.md
echo "" >> README.md
echo "This is the project directory for the static libraries project." >> README.md

# Copy putchar file from previous task
cp ../0x05-pointers_arrays_strings/_putchar.c .
echo "#ifndef MAIN_H" > main.h
echo "#define MAIN_H" >> main.h
echo "" >> main.h
echo "#include <unistd.h>" >> main.h
echo "" >> main.h
echo "int _putchar(char c);" >> main.h
echo "" >> main.h
echo "#endif /* MAIN_H */" >> main.h

