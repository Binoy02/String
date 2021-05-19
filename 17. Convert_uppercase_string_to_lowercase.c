/*
  Binoy Das Gupta
  C program to convert uppercase string to lowercase
  19-05-2021
*/

#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	printf("Before conversion :\n");
	printf("String = %s\n",s);
	int i=0,length=0;
	while(s[i]!='\0')
	{
		i++;
		length++;
	}
	for(i=0;i<length;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i] = s[i] + 32;
		}
	}
	printf("After swapping :\n");
	printf("String = %s\n",s);
	return 0;
}
