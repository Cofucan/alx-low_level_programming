CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
SET_A = 0-print_listint.c 1-listint_len.c 2-add_nodeint.c 3-add_nodeint_end.c
SET_B = 4-free_listint.c 5-free_listint2.c 6-pop_listint.c 7-get_nodeint.c
SET_C = 8-sum_listint.c 9-insert_nodeint.c 10-delete_nodeint.c
SET_D = 100-reverse_listint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c


betty-all:
	betty lists.h $(SET_A) $(SET_B) $(SET_C) $(SET_D)
t0: lists.h 0-main.c
	gcc $(CFLAGS) 0-main.c 0-print_listint.c -o a -g

t1: lists.h 1-main.c
	gcc $(CFLAGS) 1-main.c 1-listint_len.c -o b -g

t2: lists.h 2-main.c
	gcc $(CFLAGS) 2-main.c 2-add_nodeint.c 0-print_listint.c -o c -g

t3: lists.h 3-main.c
	gcc $(CFLAGS) 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d -g

t4: lists.h 4-main.c
	gcc $(CFLAGS) 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e -g

t5: lists.h 5-main.c
	gcc $(CFLAGS) 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f -g

t6: lists.h 6-main.c
	gcc $(CFLAGS) 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g -g

t7: lists.h 7-main.c
	gcc $(CFLAGS) 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h -g

t8: lists.h 8-main.c
	gcc $(CFLAGS) 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i -g

t9: lists.h 9-main.c
	gcc $(CFLAGS) 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j -g

t10: lists.h 10-main.c
	gcc $(CFLAGS) 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k -g

t100: lists.h 100-reverse_listint.c
	gcc $(CFLAGS) 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l -g

t101: lists.h 101-print_listint_safe.c
	gcc $(CFLAGS) 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m -g

t102: lists.h 102-free_listint_safe.c
	gcc $(CFLAGS) 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n -g

t103: lists.h 103-find_loop.c
	gcc $(CFLAGS) 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o -g
