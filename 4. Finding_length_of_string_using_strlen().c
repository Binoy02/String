/*
  Binoy Das Gupta
  Finding length of string using strlen() function
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s[50];
	printf("Enter a string = ");
	gets(s);
	printf("The string is = %s\n",s);
	int length = strlen(s);
	printf("The length of the string is = %d\n",length);
	return 0;
}
