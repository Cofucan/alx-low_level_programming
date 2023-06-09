CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
F0 = 0-hash_table_create.c
F1 = 1-djb2.c
F2 = 2-key_index.c
F3 = 3-hash_table_set.c
F4 = 4-hash_table_get.c
F5 = 5-hash_table_print.c
F6 = 6-hash_table_delete.c

betty-all:
	betty hash_tables.h $(F0) $(F1) $(F2) $(F3) $(F4) $(F5) $(F6)

clean:
	rm a b c d e

t0:
	gcc 0-main.c $(F0) -o a
	./a
	valgrind ./a

t1:
	gcc 1-main.c $(F1) -o b
	./b
