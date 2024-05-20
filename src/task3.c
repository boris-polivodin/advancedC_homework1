/*
 Преподаватели Geek Brains создали набор, содержащий N (1 ≤ N ≤ 1 000 000)
 натуральных чисел, не превосходящих 1 000 000. Известно, что ровно одно
 число в этом наборе встречается один раз, а остальные — ровно по два раза.
 Помогите им найти это число. Входные данные: в первой входной строке
 вводится число N, затем по одному числу в строке вводятся N натуральных
 чисел, не превосходящих 2 000 000 000. Выходные данные: ваша программа
 должна определить число, встречающееся один раз, и вывести его на экран.
 Указание: использовать массивы запрещается.
 Данные на входе: Натуральное число N (N > 0), после которого следует
 последовательность из N целых чисел.
 Данные на выходе: Одно целое число.
 */
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

typedef struct NODE {
	int value;
	int counter;
	struct NODE *next;
} node_t;

int add_number(node_t ** list, int number) {
	if (! *list) {
		if (!(*list = malloc(sizeof(node_t)))) {
			perror("malloc");
			return 1;
		}
		(*list)->value = number;
		(*list)->counter = 1;
		(*list)->next = NULL;

		return 0;
	}
	else {
		if ((*list)->value == number) {
			(*list)->counter += 1;
			return 0;
		}
		else {
			return add_number(&((*list)->next), number);
		}
	}
}

void del_list(node_t *list) {
	node_t *tmp;
	while (list) {
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

void task3(void) {
	node_t *list = NULL, *ptr = NULL;
	int number;

	unsigned int n = 0;
	scanf("%u", &n);
	while (n) {
		scanf("%d", &number);
		if (add_number(&list, number)) {
			fprintf(stderr, "Memory error!\n");
		}
		n--;
	}

	for (ptr = list; ptr != NULL; ptr = ptr->next)
		if (ptr->counter == 1)
			printf("%d\n", ptr->value);

	del_list(list);
}
