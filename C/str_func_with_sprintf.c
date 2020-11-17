/*
 * Implement strlen,strcpy,strcat with sprintf. 
 */
#include <stdio.h>

int str_len(char *str)
{
	return sprintf(str,"%s",str);

}

int str_cpy(char *str1, const char *str2 )
{
	return sprintf(str1,"%s",str2);
}

int str_cat(char *str1,const char *str2)
{
	return sprintf(str1,"%s%s",str1,str2);
}

int main()
{
	char str1[100] = "",str2[100] = "";
	scanf("%s%s",str1,str2);
	
	printf("The length of str1 is %d\n", str_len(str1));
	str_cat(str1,str2);
	printf("The string of str_cat is %s\n",str1);
	str_cpy(str1,str2);
	printf("Copy str2 to str1, str1 = %s\n",str1);

	return 0;
}
