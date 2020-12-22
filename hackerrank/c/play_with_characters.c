#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
 *
 * Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
*/

#define LEN_OF_STRING 105
int main() {
	char c,chars[LEN_OF_STRING],sentence[LEN_OF_STRING];
	char s[LEN_OF_STRING];

	scanf("%c", &c);
	scanf("%s", chars);
	while( getchar() != '\n');
	scanf("%[^\n]s", sentence);
	while( getchar() != '\n');
	scanf("%[^\n]%*c", s);

	printf("%c\n", c);
	printf("%s\n", chars);
	printf("%s\n", sentence);
	printf("%s\n", s);
	
	return 0;
}
