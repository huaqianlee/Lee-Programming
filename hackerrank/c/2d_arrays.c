#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* readline();
char** split_string(char* str);
void max_hourglass(int** arr);

int main() {
	int** arr = malloc(6 * sizeof(int *));

	for (int i = 0; i < 6; ++i) {
		*(arr + i) = malloc(6 * sizeof(int));

		char** arr_item = split_string(readline());

		for (int j = 0; j < 6; ++j) {
			char* arr_item_endptr;
			char* arr_item_str = *(arr_item + j);
			int item = strtol(arr_item_str, &arr_item_endptr, 10);

			if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0')
				exit(EXIT_FAILURE);

			*(*(arr + i) + j) = item;
		}
	}

	max_hourglass(arr);
}

char* readline() {
	int alloc_length = 1024;
	int data_length = 0; 
	char* data = malloc(alloc_length);

	while (true) {
		char* cursor = data;
		char* line = fgets(cursor, alloc_length - data_length, stdin);

		if (!line) break;

		data_length = strlen(cursor);
		if ( data_length < alloc_length - 1 || data[alloc_length - 1] == '\n')
			break;

		int new_length = alloc_length << 1;
		data = realloc(data, new_length);

		if (!data) break;
		alloc_length = new_length;
	}

	if (data[data_length - 1] == '\n')
		data[data_length - 1] = '\0';
	data = realloc(data, data_length);

	return data;
}

char** split_string(char* str) {
	char** splits = NULL;
	char* token = strtok(str, " ");

	int spaces = 0;

	while (token) {
		//alloc ++spaces space every time; 
		splits = realloc(splits, sizeof(char*) * ++spaces);
		if (!splits)
			return splits;
		splits[spaces - 1] = token;

		//str must be NULL in each subsequent call that should parse the same string.
		token = strtok(NULL, " ");
	}
	return splits;
}

void max_hourglass(int** arr) {
	int row = 0, column = 0,ret = 0, tmp = 0;
	for (int i = 0; i < 4; ++i) {
		for(int j = 0; j < 4; ++j) {
			tmp = arr[i][j] + arr[i][j+1] + arr[i][j+2];
			tmp += arr[i+1][j+1];
			tmp += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

			// Don't forget the first hourglass.
			if (ret < tmp || i == 0 && j == 0) {
				row = i;
				column = j;
				ret = tmp;
			}
		}
	}
	printf("%d %d %d\n",arr[row][column],arr[row][column + 1],arr[row][column + 2]);
	printf("  %d  \n",arr[row + 1][column + 1]);
	printf("%d %d %d\n",arr[row + 2][column],arr[row + 2][column + 1],arr[row + 2][column + 2]);

	printf("sum = %d\n", ret);

	return;
}
