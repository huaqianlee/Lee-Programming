#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);


int main()
{
    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    int index = 0, index_algo = 0;
    int *ret = malloc(sizeof(int *));
    int *ret_algo = malloc(sizeof(int *));
    int tmp,ret_tmp = 0;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** nk = split_string(readline());

        char* n_endptr;
        char* n_str = nk[0];
        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        char* k_endptr;
        char* k_str = nk[1];
        int k = strtol(k_str, &k_endptr, 10);

        if (k_endptr == k_str || *k_endptr != '\0') { exit(EXIT_FAILURE); }

	for (int i = 1; i < n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			tmp = i & j;
			ret_tmp = (tmp < k && ret_tmp < tmp) ? tmp : ret_tmp;
		}
	}

	ret[index++] = ret_tmp;
	ret_tmp = 0;

	ret_algo[index_algo++] = (((k-1) | k) > n && k % 2 == 0) ? k -2 : k-1;

    }

    printf("Always failed on case 2~5, don't know what's wrong and how to fix it:\n");
    for (int i = 0; i < t; ++i){
	    printf("%d\n", ret[i]);
    } 
    printf("Algorithm and failed on case 2~5, don't know why either:\n");
    /* The same way works in Java 7*/ 
    for (int i = 0; i < t; ++i){
	    printf("%d\n", ret_algo[i]);
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

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

