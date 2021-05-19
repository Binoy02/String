/*
  Binoy Das Gupta
  Convert uppercase to lowercase using strlwr()
  17-05-2021
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	gets(s);
	printf("Uppercase string is = %s\n",s);
	strlwr(s);
	printf("Lowercase string is = %s\n",s);
	return 0;
}

