#!/bin/bash

# This script creates the starter files for the project: Even more pointers_arrays_strings
mkdir 0x08-recursion
cd 0x08-recursion

# Create readme file
touch README.md
echo "# Recursion" >> README.md
echo "" >> README.md
echo "This is the project directory for the project tasks where we practice recursion." >> README.md

# Create test files for each of the mandatory tasks
for i in {0..7};
do
	touch "${i}-main.c"
done

# Create main.h header file
echo "#include <unistd.h>" >> main.h

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

