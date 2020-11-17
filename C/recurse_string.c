#include <stdio.h>

int main (void)
{
	char str[100];

	scanf("%s",str);

	for (int i = 0; str[i]; ++i){
		printf("%c\t",str[i]);
	}
	printf("\n");
}
