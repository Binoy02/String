/*
  Binoy Das Gupta
  String compare using strcmp()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	int d = strcmp(s1,s2); /* if strings are equal, this function will return 0 and 
	if not, return 1. Both cases, the function is returning a integer value. 
	That's why, this function has to be stored in a integer data type. */
	if(d==0)
	{
		printf("Strings are equal\n");
	}
	else
	{
		printf("Strings are not equal\n");
	}
	return 0;
}
