/* 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */
#include <stdio.h>

int main(void) {
	int sum = 0,n;

	scanf("%d",&n);
	for(int i = 0; i < n; ++i) {
		if( i % 3 == 0 || i % 5 == 0)
			sum += i;
		//printf("%d\n", sum);
	}

	printf("The sum of all multiples: %d\n", sum);

	return 0;
}
