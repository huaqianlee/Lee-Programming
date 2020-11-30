#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char* readline();

int factorial(int n) {
	if ( n <= 1)
		return 1;
	return n * factorial(n -1);
}

int main() {
	setenv("OUTPUT_PATH", "./hackerrank/out/t.txt", 1);
	FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

	char* n_endptr;
	char* n_str = readline();
	int n = strtol(n_str, &n_endptr, 10);

	printf("n = %d\n", n);

	if (n_endptr == n_str || *n_endptr != '\0') 
		exit(EXIT_FAILURE);

	printf("n = %d\n", n);
	int result = factorial(n);
	printf("r = %d\n", result);

	fprintf(fptr, "%d\n", result);

	fclose (fptr);

	return 0;

}


char* readline() {
	size_t alloc_length = 1024;
	size_t data_length = 0;
	char* data = malloc(alloc_length);

	while (true) {
		char* cursor = data + data_length;
		char* line = fgets(cursor, alloc_length - data_length, stdin);
		
		if (!line) break;

		data_length += strlen(cursor);

		if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
			break;

		size_t new_length = alloc_length << 1;
		data = realloc(data, new_length);

		if (!data) break;

		alloc_length = new_length;
	}

	if (data[data_length - 1] == '\n') {
		data[data_length - 1] = '\0';
	}

	// Free unused space.
	data = realloc(data, data_length);
	return data;
}

