#!/bin/bash

# This script creates the starter files for the project: C more malloc, free
mkdir 0x0C-more_malloc_free
cd 0x0C-more_malloc_free

# Create readme file
touch README.md
echo "# C - More Malloc, Free" >> README.md
echo "" >> README.md
echo "This is the project directory for the project tasks where we practice more of dynamic memory allocation with malloc and free." >> README.md

# Create test files for each of the mandatory tasks
for i in {0..3};
do
	touch "${i}-main.c"
done

# Copy putchar file from previous task
cp ../0x05-pointers_arrays_strings/_putchar.c .

# Create main.h header file
echo "#ifndef MAIN_H" > main.h
echo "#define MAIN_H" >> main.h
echo "" >> main.h
echo "#include <unistd.h>" >> main.h
echo "" >> main.h
echo "int _putchar(char c);" >> main.h
echo "" >> main.h
echo "#endif /* MAIN_H */" >> main.h

