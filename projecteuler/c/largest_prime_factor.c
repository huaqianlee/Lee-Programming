#include <stdio.h>
#include <math.h>

int factor[1000] = {0};
void  prime_factor(long long n) {
	int index = 0;

	while ( n % 2 == 0) {
		factor[index] = 2;
		++index;
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i += 2) {
		while ( n % i == 0){
			printf("i = %d\n",i);
			factor[index++] = i;
			n = n/i;
		}
	}
	factor[index] = n;


	return;
}

int main() {
	long long n;
	int i;

	scanf("%lld", &n);
	prime_factor(n);
	for (i = 0; factor[i]; ++i) {
		printf("%d\t",factor[i]);
	}
	printf("\n");
	printf("The largest prime factor is %d.\n", factor[i-1]);

	return 0;
}
