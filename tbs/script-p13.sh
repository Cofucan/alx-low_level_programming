#!/bin/bash

# This script creates the starter files for the project: More Singly-Linked Lists
mkdir 0x13-more_singly_linked_lists
cd 0x13-more_singly_linked_lists

# Create readme file
touch README.md
echo "# C - More Singly Linked Lists" >> README.md
echo "" >> README.md
echo "This is the project directory for the projects where we learn about the data structure of singly linked lists in C." >> README.md

# Create test files for each of the mandatory tasks
for i in {0..10};
do
	touch "${i}-main.c"
done

# Copy putchar file from previous task
cp ../0x05-pointers_arrays_strings/_putchar.c .
echo "#ifndef LISTS_H" > lists.h
echo "#define LISTS_H" >> lists.h
echo "" >> lists.h
echo "#include <unistd.h>" >> lists.h
echo "" >> lists.h
echo "int _putchar(char c);" >> lists.h
echo "" >> lists.h
echo "#endif /* LISTS_H */" >> lists.h

