#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* readline();

int main() {
	char* endptr;
	char* ptr = readline();
	int n = strtol(ptr, &endptr, 10);

	printf("n = %d\n", n);
	if (endptr == ptr || *endptr != '\0')
		exit(EXIT_FAILURE);

	printf("n = %d\n", n);
	int ret = 0;
	for (int i = 0; i < n; ++i) {
		ret += i * (i % 3 == 0 || i % 5 == 0);
	}
	printf("Sum = %d\n", ret);

	return 0;
}

char* readline() {
	size_t alloc_length = 1024;
	size_t data_length = 0;
	char* data = malloc(alloc_length);

	while (true) {
		char* cursor = data;
		data = fgets(cursor, alloc_length - data_length, stdin);

		if (!data) break;

		data_length += strlen(cursor);
		if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
			break;

		size_t new_length = alloc_length << 1;
		data = realloc(data, new_length);
	}

	if (data[data_length - 1] == '\n')
		data[data_length - 1] = '\0';

	data = realloc(data, data_length);
	printf("%s\n",data);

	return data;
}
