#include <stdio.h>


int fib(int n) {
	//printf("%s\n", __FUNCTION__);
	if(n < 1) return 0;
	if( 1 == n || 2 == n) return 1;
	return fib(n - 1) + fib(n - 2); 
}

int fib_loop1(int n) {
	int f1, f2;

       	f1 = f2 = 1;
	for (int i = 3; i <= n ; ++i) {
		f2 = f2 + f1;
		f1 = f2 - f1; // Get old value of f2.
		//printf("%s\n", __FUNCTION__);
	}

	return f2;
}

int fib_loop2(int n) {
	return 0;	
}

int main() {
	int n;
	scanf("%d", &n);
	printf("fib: %d\n", fib(n));
	printf("fib_loop1: %d\n", fib_loop1(n));
	printf("fib_loop2: %d\n", fib_loop2(n));

	return 0;
}
