/*
  Binoy Das Gupta
  Convert lowercase to uppercase using strupr()
  17-05-2021
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	gets(s);
	printf("Lowercase string is = %s\n",s);
	strupr(s);
	printf("Uppercase string is = %s\n",s);
	return 0;
}
