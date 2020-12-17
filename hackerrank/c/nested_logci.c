#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


int main() {

	int ret_day, ret_month, ret_year;
	int expect_day, expect_month, expect_year;

	printf("Enther returned date:\n");
	scanf("%d%d%d", &ret_day, &ret_month, &ret_year);
	printf("Enther expected date:\n");
	scanf("%d %d %d",&expect_day, &expect_month, &expect_year);

	if (ret_year > expect_year)
		printf("10000\n");
	else if (ret_year == expect_year) {
		if(ret_month > expect_month)
			printf("%d\n", (ret_month - expect_month) * 500);
		else if (ret_month == expect_month && ret_day > expect_day)
			printf("%d\n", (ret_day - expect_day) * 15);
		else 
			printf("0\n");
	} else
		printf("0\n");

	/*
	if (ret_year > expect_year)
		printf("10000\n");
	else if (ret_month > expect_month)
		printf("%d\n", (ret_month - expect_month) * 500);
	else if (ret_day > expect_day)
		printf("%d\n", (ret_day - expect_day) * 15);
	else
		printf("0\n");
	*/

	return 0;
}
