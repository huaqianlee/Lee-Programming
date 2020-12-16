#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_N 10000

static int primes[MAX_N + 5];

void prime_init() {
	primes[0] = primes[1] = 1;
	for (int i = 2; i * i <= MAX_N; ++i) {
		if (primes[i]) continue;

		// Form here, i is prime number.
		for (int j = 2 * i; j < MAX_N; j += i) 
			primes[j] = 1;
	}
}


int main() {
	prime_init();
	long result = 0;

	for (int i = 2; i <= MAX_N; ++i) {
		result += i * (1 - primes[i]);
		// way 2.
		//if (!primes[i])
		//	result += i;
	}

	printf("The sum of prime numbers is %ld\n", result);

	return 0;
}
