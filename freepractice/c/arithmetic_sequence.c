/*
 * 计算 100 以内自然数“和的平方”与“平方和”的差
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long get_sum_of_square_of_arithmetic_sequence(int n) ;
long long get_square_of_sum_of_arithmetic_sequence(int n) ;

int main() {
	long long ret1 = get_square_of_sum_of_arithmetic_sequence(100);
	long long ret2 = get_sum_of_square_of_arithmetic_sequence(100);

	if (ret1 > ret2)
		printf("ret = %lld\n", ret1 - ret2);
	else
		printf("ret = %lld\n", ret2 - ret1);

	return 0;
}

long long get_square_of_sum_of_arithmetic_sequence(int n) {
	long long ret = 0;

	ret = (1 + n - 1) * (n - 1) / 2;
	ret *= ret;

	return ret; 
}

long long get_sum_of_square_of_arithmetic_sequence(int n) {
	long long ret = 0;

	ret = n * (n + 1) * (2 * n + 1) / 6;

	return ret;
}
