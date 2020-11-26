/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */
#include <stdio.h>

long gcd(long a, long b) {
	if (a % b != 0)
		return gcd(b, a%b);
	else
		return b;
}

long lcm(long n) {
	long ans = 1;
	for (long i = 1; i <= n; i++) {
		ans = (ans * i)/gcd(ans, i);
	}
	return ans;
}

int main() {
	long n = 20;
	printf("%ld\n", lcm(n));
	return 0;
}
