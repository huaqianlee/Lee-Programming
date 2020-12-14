#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int init_prime() {
	int nums[1005] = {0};

	//for ( int i = 2; i <= sqrt(1000); ++i) {
	for ( int i = 2; i * i <= 1000; ++i) {
		if (nums[i]) continue;

		for (int j = 2 * i; j <= 1000; j += i) {
			nums[j] = 1;
		}
	}	

	for (int i = 2; i <= 1000; ++i) {
		if(!nums[i])
			printf("%d\t",i);
	}
	printf("\n");

	return 0;
}

int main() {
	init_prime();
}
