#include <stdio.h>

int main() {
	char str[100];
	scanf("%[^\n]s",str);// Include space, not \n
	printf("%s\n",str);

	scanf("%s",str);
	printf("%s\n",str);

	return 0;
}
