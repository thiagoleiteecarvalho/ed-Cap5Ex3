/*
 * main.c
 * Resposta do exercício 3 do capítulo 5.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *f_1 = iniciar();
	Fila *f_2 = iniciar();

	enqueue(f_1, 'A');
	enqueue(f_1, 'C');
	enqueue(f_1, 'E');
	enqueue(f_1, 'G');
	enqueue(f_1, 'I');
	enqueue(f_1, 'K');
	enqueue(f_1, 'M');
	enqueue(f_1, 'O');
	enqueue(f_1, 'Q');
	enqueue(f_1, 'S');
	enqueue(f_1, 'U');
	enqueue(f_1, 'W');
	enqueue(f_1, 'Y');

	enqueue(f_2, 'B');
	enqueue(f_2, 'D');
	enqueue(f_2, 'F');
	enqueue(f_2, 'H');
	enqueue(f_2, 'J');
	enqueue(f_2, 'L');
	enqueue(f_2, 'N');
	enqueue(f_2, 'P');
	enqueue(f_2, 'R');
	enqueue(f_2, 'T');
	enqueue(f_2, 'V');
	enqueue(f_2, 'X');
	enqueue(f_2, 'Z');

	while(!empty(f_1) && !empty(f_2)) {

		printf(" %c %c", dequeue(f_1), dequeue(f_2));
	}

	return 0;
}

