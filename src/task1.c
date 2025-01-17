/*
 ============================================================================
 На стандартном потоке ввода задается натуральное число N (N > 0),
 после которого следует последовательность из N целых чисел.
 На стандартный поток вывода напечатайте, сколько раз в этой последовательности встречается максимум.

 Указание: использовать массивы запрещается.

 Данные на входе: Натуральное число N (N > 0), после которого следует
 последовательность из N целых чисел.
 Данные на выходе: Одно целое число.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void task1(void) {
	unsigned int n = 0, cnt = 0;
	int item, max = 0;
	scanf("%u", &n);
	while (n) {
		scanf("%d", &item);
		if (item > max) {
			max = item;
			cnt = 1;
		} else if (item == max) {
			cnt++;
		}
		n--;
	}
	printf("%u\n", cnt);
}
