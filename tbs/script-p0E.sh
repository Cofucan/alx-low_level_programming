#!/bin/bash

# This script creates the starter files for the project: Preprocessor
mkdir 0x0D-preprocessor
cd 0x0D-preprocessor

# Create readme file
touch README.md
echo "# C - Preprocessor" >> README.md
echo "" >> README.md
echo "This is the project directory for the projects where we learn about preprocessor and macros in C." >> README.md

# Create test files for each of the mandatory tasks
for i in {0..4};
do
	touch "${i}-main.c"
done

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

