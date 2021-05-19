/*
  Binoy Das Gupta
  C program to read and print a string.
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s[30];
	printf("Enter full name = ");
	gets(s);
	printf("Full name is = %s\n",s);
	return 0;
}
