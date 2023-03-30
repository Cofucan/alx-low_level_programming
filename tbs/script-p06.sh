#!/bin/bash

# This script creates the starter files for the project: More ointers_arrays_strings
mkdir 0x06-pointers_arrays_strings
cd 0x06-pointers_arrays_strings

# Create readme file
touch README.md
echo "# More Pointers, Arrays & Strings" >> README.md
echo "" >> README.md
echo "This is the project directory for the project tasks where we practice more on pointers, arrays and strings." >> README.md

# Create test files for each of the mandatory tasks
for i in {0..7};
do
	touch "${i}-main.c"
done

# Create main.h header file
echo "#include <unistd.h>" >> main.h

# Copy putchar file from previous task
cp ../0x05-pointers_arrays_strings/_putchar.c ./