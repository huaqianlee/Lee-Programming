#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	printf(" has %d digits\n",printf("%d", n));
	char out[50];
	int ret = sprintf(out,"%d",n);
	printf("%d\n",ret);
	return 0;
}
