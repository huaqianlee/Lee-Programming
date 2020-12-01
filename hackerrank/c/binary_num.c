#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

char* readline();
int get_consecutive_ones(int);

int main() {
	char* endptr;
	char* str = readline();
	int n = strtol(str, &endptr, 10);

	if (endptr == str || *endptr != '\0')
		exit(EXIT_FAILURE);

	printf("The max consecutive ones are %d\n",get_consecutive_ones(n));
	printf("sizeof = %d\n", (int)sizeof("lee"));
	printf("strlen = %d\n", (int)strlen("lee"));
	return 0;
}

int get_consecutive_ones(int n) {
	int ret = 0, temp = 0;

	while (true) {
		if ( n % 2 == 1)
			temp++;
		else
			temp = 0;

		if ( ret < temp)
			ret = temp;

		if ((n = n >> 1) == 0)
			break;
		printf("looping and n = %d ...\n", n);
	}

	return ret;
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
		if ( data_length < alloc_length - 1 || data[alloc_length - 1] == '\n')
			break;

		size_t new_length = alloc_length << 1;
		data = realloc(data, new_length);

		if (!data) break;
		alloc_length = new_length;
	}

	if (data[data_length - 1] == '\n')
		data[data_length - 1] = '\0';

	data = realloc(data, data_length);
	return data;
}
