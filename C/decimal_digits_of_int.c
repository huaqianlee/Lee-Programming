#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	// 1. return value of printf.
	printf(" has %d digits\n",printf("%d", n));

	char out[50];
	// 2. return value of sprintf.
	int ret = sprintf(out,"%d",n);
	printf("%d\n",ret);
	return 0;
}
