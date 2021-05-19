/*
  Binoy Das Gupta
  String concatenation without strcat()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	int i=0,length=0;
	while(s1[i]!='\0')
	{
		i++;
		length++;
	}
	int j=0;
	while(s2[j]!='\0')
	{
		s1[length+j]=s2[j];
		j++;
	}
	printf("Concatenated string = %s\n",s1);
	return 0;
}
