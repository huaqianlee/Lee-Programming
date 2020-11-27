#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

char* read_line();
char* readline();

int main() {
	int num;
	char* line[10];
	int index = 0;
	int length = 0;

	scanf("%d", &num);
	
	if (num > 10 || num < 1)
		return -1;
	
	for (int i = 0; i < num; ++i) {
		line[i] = read_line();	
	}

	for (int i = 0; i < num; ++i) {
		length = strlen(line[i]);
		index = 0;
		while (true) {
			printf("%c", line[i][index]);
			index += 2;
			if (index > length - 1)
				break;
		}
		printf(" ");

		index = 1;
		while (true) {
			printf("%c", line[i][index]);
			index += 2;
			if (index > length - 1)
				break;
		}
		printf("\n");

	}

	return 0;
}

char* read_line() {
	char* input = malloc(10000);

	// Forgot again.
	while(getchar() != '\n');
	scanf("%[^\n]s", input);

	return input;
}

char* readline() {
	size_t alloc_length = 10000;
	size_t data_length = 0;
	char* data = malloc(alloc_length);

	while(true) {
		char* cursor = data + data_length;
		char* line = fgets(cursor, alloc_length - data_length, stdin);


		if (!line) break;

		data_length += strlen(cursor);

		if (data_length < alloc_length -1 || data[data_length - 1] == '\n') break;

		size_t new_length = alloc_length << 1;
		data = realloc( data, new_length);

		if (!data) break;

		alloc_length = new_length;
	}

	if (data[data_length - 1] == '\n') data[data_length - 1] = '\0';

	data = realloc(data, data_length);

	return data;
}

