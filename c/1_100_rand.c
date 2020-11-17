#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, n = 5;
	for(i = 1; i <= 100; i++)
	{

		printf("%3d", n);
		if(i % 10 == 0)
			printf("\n");
		/*else
			printf("\t");
		*/

		n = (n * 3) % 101;
	}
	printf("RAND_MAX = %d\n", RAND_MAX);

	return 0;
}

