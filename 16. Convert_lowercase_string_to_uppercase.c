/*
  Binoy Das Gupta
  C program to convert lowercase string to uppercase
  19-05-2021
*/

#include<stdio.h>
int main()
{
	char s[50];
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
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("After swapping :\n");
	printf("String = %s\n",s);
	return 0;
}
