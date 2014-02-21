#include <stdio.h>
#include <stdlib.h>

#define LIM 100048
#define PRINT(i,j) printf("i = %d, j = %d\n", i, j);

/*
 * Arg0 == 0: line X columns
 * Arg0 != 0: columns x line
 */

int main(int argc, char **argv) {
	int **m;
	int i, j;

	m = (int**)malloc(LIM * sizeof(int*));

	for (i = 0; i < LIM; i++){
		m[i] = (int*)malloc(LIM * sizeof(int));
	} 

	if (atoi(argv[1])) {
		for (j = 0; j < LIM; j++) {
			for (i = 0; i < LIM; i++) {
#ifdef PRINT_OUTPUT
				PRINT(i, j);
#endif
				m[j][i] = 0;
			}
		}
	}else{
		for (i = 0; i < LIM; i++) {
			for (j = 0; j < LIM; j++) {
#ifdef PRINT_OUTPUT
				PRINT(i, j);
#endif
				m[i][j] = 0;
			}
		}
	}
	
	for (i = 0; i < LIM; i++) {
		for (j = 0; j < LIM; j++) {
			printf("m[%d][%d] = %d\n", i, j, m[i][j]);
		}
	}

}
