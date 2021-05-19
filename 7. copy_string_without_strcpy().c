/*
  Binoy Das Gupta
  Copy string without using strcpy()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	printf("First string is = %s\n",s1);
	int i=0;
	while(s1[i]!='\0')
	{
		s2[i] = s1[i];
		i++;
	}
	printf("Copied string is = %s\n",s2);
	return 0;
}
