#include <stdio.h>

/*
 * Caculate the bits of integer from 1 to n.
 * 数学归纳法的思想，Mathematical induction.
 *
 * x   = `****1000`
 * x-1 = `****0111`
 * y = x & (x-1), x.bits_of_1 = y + 1
 * f(x) = f(x & (x-1))
 *
 * if n = 7, output 1、1、2、1、2、2、3
 */
int main(){
	int f[1001];
	int i, n;

	printf("Please enter n:\n");
	scanf("%d",&n);

	f[0] = 0;
	for(i = 1; i <= n; ++i)
	{
		f[i] = f[i & (i-1)] + 1;
	}	

	for(i = 1; i <= n; ++i)
	{
		printf("%d\t",f[i]);
	}
	printf("\n");

	return 0;
}
