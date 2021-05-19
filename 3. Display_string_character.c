/*
  Binoy Das Gupta
  Display string character wise
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s[] = "Binoy";
	int i=0;
	while(s[i]!='\0')
	{
		printf("%c\n",s[i]);
		i++;
	}
	return 0;
}
