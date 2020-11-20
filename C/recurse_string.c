#include <stdio.h>

int main (void)
{
	char str[100];

	scanf("%s",str);

	/* The last char is `\0`, its value is 0 */
	for (int i = 0; str[i]; ++i){
		printf("%c\t",str[i]);
	}
	printf("\n");
}
