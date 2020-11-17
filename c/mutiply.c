#include <stdio.h>

int main() {
	int i = 0, j = 0;

	for(i = 1; i <= 9; i++)
	{
		for(j = 1;j <= i; j++)
		{
			// 1.  
			j == 1 || printf("\t");
			printf("%d*%d=%d",j,i,j*i);
			/* 2. 
			if(i == j)
				printf("\n");
			else
				printf("\t");
			*/
		}
		printf("\n");
	}
	return 0;
}
