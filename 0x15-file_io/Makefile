CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
F0 = 0-read_textfile.c
F1 = 1-create_file.c
F2 = 2-append_text_to_file.c
F3 = 3-cp.c

betty-all:
	betty $(F0) $(F1) $(F2) # $(F3) $(F4)

task-0:
	gcc $(CFLAGS) 0-main.c 0-read_textfile.c -o a -g

task-1:
	gcc $(CFLAGS) 1-main.c 1-create_file.c -o b -g

task-2:
	gcc $(CFLAGS) 2-main.c 2-append_text_to_file.c -o c -g

task-3:
	gcc $(CFLAGS) 3-cp.c -o cp -g
