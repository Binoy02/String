/*
  Binoy Das Gupta
  String compare without using strcmp()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	int i=0,l=0;
	while(s1[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			l++;
			break;
		}
		i++;
	}
	if(l==0)
	{
		printf("Strings are Equal\n");
	}
	else
	{
		printf("Strings are not equal\n");
	}
	return 0;
}
