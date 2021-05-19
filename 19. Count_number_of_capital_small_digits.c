/*
  Binoy Das Gupta
  C program to count total number of capital letters,small letters,digits in a string.
  19-05-2021
*/

#include<stdio.h>
int main()
{
	char s[1000];
	int i,capital,small,digit;
	printf("Enter a string = ");
	gets(s);
	capital=small=digit=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			capital++;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			small++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			digit++;
		}
	}
	printf("\nIn the string :\n");
	printf("Number of capital letters = %d\n",capital);
	printf("Number of small letters = %d\n",small);
	printf("Number of digits = %d\n",digit);
	return 0;
}
