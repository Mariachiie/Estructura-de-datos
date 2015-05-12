/*
 * regla.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */

#include <stdio.h>
#define MAXIMO 987654321

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int aux = 1;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int x=0;
	for (i = 1; i < MAXIMO; i++) {
		int actual;
		printf("%d", i);
		if (i < 0)
				return 0;
			if (i < 10){;
				x=1;
			}
			if (i < 100){
				x=2;
			}
			if (i < 1000){
				x=3;
			}
			if (i < 10000){
				x=4;
			}
			if (i < 100000){
				x=5;
			}
			if (i < 1000000){
				x=6;
			}
			if (i < 10000000){
				x=7;
			}
			if (i < 100000000){
				x=8;
			}
			if (i < 1000000000){
				x=9;
			}
			if (i % x == 0) {

				if (i % 10 != 0) {

					actual = i % 10;

					if (actual != a && actual != b && actual != c && actual != d
							&& actual != e && actual != f && actual != g && actual != h
							&& actual != i) {
						aux = aux + 1;

						if (aux == 1) {
							a = actual;
						}

						else if (aux == 2) {
							b = actual;
						}

						else if (aux == 3) {
							c = actual;
						}

						else if (aux == 4) {
							d = actual;
						}

						else if (aux == 5) {
							e = actual;
						}

						else if (aux == 6) {
							f = actual;
						}

						else if (aux == 7) {
							g = actual;
						}

						else if (aux == 8) {
							h = actual;
						}

						else if (aux == 9) {
							i = actual;
						}


					} else
						return 0;
				} else
					return 0;
			} else
				return 0;


	}

	return 0;
}
