// Hard to implement the code of this problem by c lanuguage, my solution takes too much time and one wrong case exists.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


struct dictionary {
	char * name;
	int tel;
} ;

char* readline();
char** split_string(char* str);

int main() {

	    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
		struct dictionary arr[100000] = {};
		char* endptr;
		char* strs = readline();
		int n = strtol(strs, &endptr, 10);

		if(endptr == strs || *endptr !='\0') exit(EXIT_FAILURE);

		char** arr_temp = NULL;
		for (int i = 0; i < n; ++i) {
				arr_temp = split_string(readline());
				
				arr[i].name = *arr_temp;	
				arr[i].tel = strtol(*(arr_temp + 1), &endptr, 10);
		}

		char* inputs[100] = {};
		char** names = inputs;
		for (int i = 0; i < n; ++i) {
				inputs[i] = readline();
		}

		for (int i = 0; i < n; ++i) {
				int j = 0;
				for (j = 0; j < n; ++j) {
						if (!strcmp(arr[i].name, inputs[j])) {
								printf("%s=%d\n", arr[i].name, arr[i].tel);
								break;
						}
				}
				if ( j >= n)
						printf("Not found\n");

		}
	
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
				
				if (data_length < alloc_length -1 || data[data_length - 1] == '\n') break;

				// if the length of string exceeded alloc_length.
				size_t new_length = alloc_length << 1;
				data = realloc(data, new_length);

				if (!data) break;

				alloc_length = new_length;
		}

		if(data[data_length - 1] == '\n')
				data[data_length - 1] = '\0';

		data = realloc(data, data_length);

		return data;
}

char ** split_string(char* str) {
		char** splits = NULL;
		char* token = strtok(str, " ");

		int spaces = 0;

		while (token) {
				 splits = realloc(splits, sizeof(char*)* ++spaces);
				 if (!splits) return splits;

				 splits[spaces - 1] = token;
				 token = strtok(NULL, " ");
		}
		return splits;
}
