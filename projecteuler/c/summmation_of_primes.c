#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);
char* readline();
int main() {
	char* end_ptr;
	char* ptr = readline();
	int n = strtol(ptr, &end_ptr, 10);

	if (ptr == end_ptr || *end_ptr != '\0')
		exit(EXIT_FAILURE);

	long long ret = 0;
	//printf("%d\n", (int)sqrt(n));
	for ( int i = 2; i < n; ++i) {
		if (is_prime(i)) {
			ret += i;
		}
	}

	printf("Sum of all primes are %lld\n",ret);

	return 0;
}

bool is_prime(int n) {
	if (n <= 0)
		return false;
	if (n == 1)
		return false;
	if (n < 4)
		return true;
	if (n % 2 == 0)
		return false;
	if (n % 3 == 0)
		return false;

	int round = sqrt(n);
	int f = 5;
	while (f <= round) {
		if (n % f == 0)
			return false;
		if (n % (f + 2) == 0)
			return false;
		f +=6;
	}	

	return true;

       	
}	

char* readline() {
	size_t alloc_length = 1024;
	size_t data_length = 0;
	char* data = malloc(alloc_length);

	while (true) {
		char* cursor = data + data_length;
		char* line = fgets(cursor, alloc_length, stdin);

		if (!line)
			break;

		data_length += strlen(cursor);

		if (data_length < alloc_length - 1 || data[alloc_length - 1] == '\n')
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
