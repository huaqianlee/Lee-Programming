#include <stdio.h>
#include <stdbool.h>

int main() {
	int c = 0;
	for (int a = 1; a < 1000 ; ++a) {
		for (int b = a + 1; b < 1000; ++b) {
			c = 1000 - a - b;
			if( a*a + b*b == c*c) {
				printf("a:%d,b:%d,c:%d\n", a, b, c);
				printf("sum:%d\n",a*b*c);
			}
		}
	}	
	return 0;
}


