/*
  Binoy Das Gupta
  String concatenation using strcat()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	printf("Concatenated string = %s\n",s1);
	return 0;
}
