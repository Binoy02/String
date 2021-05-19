/*
  Binoy Das Gupta
  Copy string using strcpy()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	printf("First string is = %s\n",s1);
	strcpy(s2,s1);
	printf("Copied string is = %s\n",s2);
	return 0;
}
