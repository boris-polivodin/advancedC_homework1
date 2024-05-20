/*
 ============================================================================
 На вход программе подается беззнаковое 32-битное целое число N. Требуется
 изменить значения всех битов старшего байта числа на противоположные и
 вывести полученное таким образом число.
 Данные на входе: Беззнаковое 32-битное целое число N
 Данные на выходе: Одно целое число.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "func.h"

void task2(void) {
	uint32_t n, temp_head, temp_tail;
	unsigned int rank = 32, byte_length = 8, shift = rank - byte_length;

	scanf("%u", &n);

	temp_head = ~(n >> shift);
	temp_head <<= shift;

	temp_tail = n << byte_length;
	temp_tail >>= byte_length;

	printf("%u\n", temp_head | temp_tail);
}
