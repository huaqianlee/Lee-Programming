#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
	if (0 == n || 1 == n)
		return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0)
			return false; 
	}

	return true;
}	

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int num = 0;
	int data[35] = {0};

	scanf("%d", &num);
	for (int i = 0; i < num; ++i) {
	    while (getchar() != '\n');
	    scanf("%d", &data[i]);
	}

	for (int i = 0; i < num; ++i) {
	    if (is_prime(data[i]))
		    printf("Prime\n");
	    else 
		    printf("Not prime\n");
	}

	return 0;
}

