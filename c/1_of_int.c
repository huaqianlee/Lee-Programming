#include <stdio.h>

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
