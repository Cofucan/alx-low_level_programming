CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
F0 = 0-hash_table_create.c
F1 = 1-djb2.c
F2 = 2-key_index.c
F3 = 3-hash_table_set.c
F4 = 4-hash_table_get.c
F5 = 5-hash_table_print.c
F6 = 6-hash_table_delete.c
F100 = 100-sorted_hash_table.c

betty-all:
	betty hash_tables.h $(F0) $(F1) $(F2) $(F3) $(F4) $(F5) $(F6) $(F100)

clean:
	rm a b c d e f g sht

t0:
	gcc 0-main.c $(F0) -o a -g
	./a
	valgrind ./a

t1:
	gcc $(CFLAGS) 1-main.c $(F1) -o b -g
	./b

t2:
	gcc $(CFLAGS) 2-main.c $(F1) $(F2) -o c -g
	./c

t3:
	gcc $(CFLAGS) 3-main.c $(F0) $(F1) $(F2) $(F3) -o d -g
	./d

t4:
	gcc $(CFLAGS) 4-main.c $(F0) $(F1) $(F2) $(F3) $(F4) -o e -g
	./e

t5:
	gcc $(CFLAGS) 5-main.c $(F0) $(F1) $(F2) $(F3) $(F4) $(F5) -o f -g
	./f

t6:
	gcc $(CFLAGS) 6-main.c $(F0) $(F1) $(F2) $(F3) $(F4) $(F5) $(F6) -o g -g
	valgrind ./g

php:
	gcc $(CFLAGS) 100-main.c $(F1) $(F2) $(F100) -o sht -g
	./sht

