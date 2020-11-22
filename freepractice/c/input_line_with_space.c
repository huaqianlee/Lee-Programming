#include <stdio.h>

int main() {
	char str[100];

	// Input one line
	scanf("%[^\n]s",str); // Include space, not \n
	printf("%s\n",str);

	// Input one string
	scanf("%s",str);
	printf("%s\n",str);

	return 0;
}
