#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
#define LIMIT 499

int main() {

	int i, j;
	int **mat = malloc(SIZE * sizeof(int *));
	for( int i = 0; i < SIZE; i++) {
		mat[i] = malloc(SIZE * sizeof(int));
	}

	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % LIMIT;
			mat[i][j] = mat[i][j] << 2; 
		}
	}

	for(i = 0; i < SIZE; i++) {
		free(mat[i]);
	}
	free(mat);

	return 0;
}