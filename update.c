#include <stdio.in>
#include <stdlib.h>

#define SIZE 1000
#define LIMIT 499

int main() {

	int **mat = malloc(SIZE * sizeof(int *));
	for( int i = 0; i < SIZE; i++) {
		mat[i] = malloc(SIZE * sizeof(int));
	}

	for(i = 0; i < SIZE; i++) {
		mat[i] = rand() % LIMIT;
		mat[i] = mat[i] << 2; 
	}

	return 0;
}