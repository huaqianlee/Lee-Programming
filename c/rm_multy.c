/*
 * Input n, m; n < 10, m < 10000, input n different intiger.
 * Output the nums which couldn't be divide by n intigers in 1~M.
 * 
 * Example: 
 * 	Input: 3 12
 * 	       4 5 6
 * 	Output: 1 2 3 7 9 11
 */
#include <stdio.h>

void another_way(){
	int n, m, num;
	int check[1005] = {0};

	printf("Way firt:\n");
	printf("Please enter n (< 10) and m (< 10000)\n");
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf ("%d",&num);
		for (int j = num; j <= m; j += num)
			check[j] = 1;
	}

	for (int i = 1; i <= m; ++i){
		if (1 == check[i]) continue;
		printf("%d ", i);
	}

	printf("\n");
}

int main() {
	int n , m;
	int i,j,factor[10], result[10000];

	another_way();
	printf("\n");
	
	printf("Way second:\n");
	printf("Please enter n (< 10) and m (< 10000)\n");
	scanf("%d%d",&n, &m);

	printf("Please enter n(%d) integers\n", n);
	for(i = 0; i < n; ++i)
		scanf("%d", &factor[i]);

	for(i = 1;i <= m ; ++i)
	{
		for(j = 0; j < n; ++j){
			if(i % factor[j] == 0)
				break;
		}
		if ( j == n)
			printf("%d\t",i);
	}
	printf("\n");

	return 0;
}
