#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n = 100000;
	int m = 0;

	for(i = 0; i < n; i++)
	{
		double x = 1.0 * rand()/RAND_MAX;
		double y = 1.0 * rand()/RAND_MAX;
		if(x*x + y*y <= 1.0) ++m;
	}

	printf("PI = %lf\n", 4.0 * m/n);

	return 0;
}
