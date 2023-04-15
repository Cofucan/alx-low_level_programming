CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
F0 = 0-read_textfile.c
F1 = 1-create_file.c
F2 = 2-append_text_to_file.c
F3 = 3-cp.c
F4 = 100-elf_header.c

betty-all:
	betty $(F0) $(F1) $(F2) $(F3) $(F4)

task-0:
	gcc $(CFLAGS) 0-main.c 0-read_textfile.c -o a -g

task-1:
	gcc $(CFLAGS) 1-main.c 1-create_file.c -o b -g

task-2:
	echo -n Hello > hello && ls -l hello && gcc $(CFLAGS) 2-main.c 2-append_text_to_file.c -o c -g

task-3:
	gcc $(CFLAGS) 3-cp.c -o cp -g && ls -l Incitatous && cat Incitatous 

elf-header:
	gcc $(CFLAGS) 100-elf_header.c -o elf_header -g

elf-check-linux:
	./elf_header /lib/ld-linux.so.2 > part1
	readelf -h /lib/ld-linux.so.2 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

elf-check-ubuntu64:
	./elf_header ubuntu64 > part1
	readelf -h ubuntu64 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

elf-check-solaris32:
	./elf_header solaris32 > part1
	readelf -h solaris32 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

elf-check-sortix32:
	./elf_header sortix32 > part1
	readelf -h sortix32 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

elf-check-sparcbigendian32:
	./elf_header sparcbigendian32 > part1
	readelf -h sparcbigendian32 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

elf-check-netbsd32:
	./elf_header netbsd32 > part1
	readelf -h netbsd32 > part

	@sed '12,20d;9d;10d' part > part2
	@rm part
	@echo "\n"
	cat part1
	@echo "\n"
	cat part2
	@echo "\n"
	@# diff part1 part2
	wc -c part1
	wc -c part2

