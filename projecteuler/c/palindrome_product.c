/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
#include <stdio.h>

int palindrome(int n){ 
	int temp = 0 , backup = n; // Must init temp, otherwise the result will be random.

	while (n > 0) {
		temp = temp * 10 + n % 10;
		n /= 10;
	}

	if (temp == backup)
		return 1;
	else
		return 0;
}

int get_max_palindrome () {
	int max = 0 , temp = 0;

	for (int num1 = 999; num1 > 100; --num1) {
		for (int num2 = 100; num2 < num1; ++num2) {
			temp = num1 * num2;
			if (palindrome(temp) && (temp > max)) {
				//if(temp > max)
					max = temp;
			}
		}
	}

	return max;
}

int main() {
	printf("%d\n", get_max_palindrome());
	return 0;
}
