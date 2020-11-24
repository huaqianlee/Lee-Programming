#include <stdio.h>

int fib(int num) {
	/*
	if (0 == num)
		return 0;
	if (1 == num)
		return 1;
	*/
	if (num < 1) return 0;
	if (1 == num || 2 == num) return 1;
	return fib(num - 1) + fib(num - 2);
}


int main(void) {
	int sum = 0, fib_value;
	// There should be one way to do less compute.
	for (int i = 0; ; ++i) {
		//printf("i = %d\n",i);
		fib_value = fib(i);

		if(fib_value >= 4000000)
			break;
		if(fib_value % 2 == 0) {
			//printf("i = %d, fib = %d\n",i,fib_value);
			sum += fib_value; 
		}
	}


	printf("evened-value of fib: %d\n", sum);

	return 0;
}
