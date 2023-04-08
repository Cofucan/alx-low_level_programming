CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
F0 = 0-binary_to_uint.c
F1 = 1-print_binary.c
F2 = 2-get_bit.c
F3 = 3-set_bit.c
F4 = 4-clear_bit.c
F5 = 5-flip_bits.c
F6 = 100-get_endianness.c

betty-all:
	betty $(F0) $(F1) $(F2) $(F3) $(F4) $(F5) $(F6)

task-0:
	gcc $(CFLAGS) 0-main.c 0-binary_to_uint.c -o a -g

task-1:
	gcc $(CFLAGS) 1-main.c 1-print_binary.c _putchar.c -o b -g

task-2:
	gcc $(CFLAGS) 2-main.c 2-get_bit.c -o c -g

task-3:
	gcc $(CFLAGS) 3-main.c 3-set_bit.c -o d -g

task-4:
	gcc $(CFLAGS) 4-main.c 4-clear_bit.c -o e -g

task-5:
	gcc $(CFLAGS) 5-main.c 5-flip_bits.c -o f -g

task-100:
	gcc $(CFLAGS) 100-main.c 100-get_endianness.c -o h

