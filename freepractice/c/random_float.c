#include <stdio.h>

int main()
{
	double num;
	int n;
	char str[100];

	scanf("%lf%d", &num, &n);
	sprintf(str,"%%.%dlf\n", n); // %% means to output one %
	printf(str,num);
	return 0;
}
