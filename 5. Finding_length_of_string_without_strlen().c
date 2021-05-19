/*
  Binoy Das Gupta
  Finding length of string without using strlen() function
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s[] = "Bangladesh";
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("The length of the string is = %d\n",i);
	return 0;
}
