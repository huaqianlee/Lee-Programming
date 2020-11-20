/*
 * Imitate scanf and implement my_scanf, to transfer inputted integer string as integer.
 * 
 */
#include <stdio.h>

//#define my_scanf(fmt, args...) my_scan(fmt, ##args) // ##args: allowed which args is empty, not neccessary here, but reserve
//void my_scanf(fmt, args...){ return my_scan(fmt, ##args);

/*
void my_scanf(char *str, ...)
{
	va_list args;

	va_start(args, str);
	my_scan();	

	va_end(args);
	return;
}
*/

void my_scanf(char *str, int *ret)
{
	int num = 0, flag = 0;
	//va_list args;

	//va_start(args, str);
	if(str[0] == '-') str++, flag = 1;
	for (int i = 0; str[i]; ++i)
	{
		num = num * 10 + (str[i] - '0');
	}
	if (flag) num = -num;
	*ret = num;
	
	return;
}


int main(void)
{
	char str[100];
	int n = 0;

	scanf("%s",str);
	//scanf("%[^\n]s",str);
	my_scanf(str,&n);

	printf("my_scanf: n = %d\n", n);

	return 0;
}
