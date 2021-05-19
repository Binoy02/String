/*
  Binoy Das Gupta
  String reverse using strrev()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s[50];
	gets(s);
	printf("Actual string = %s\n",s);
	strrev(s);
	printf("Reversed string = %s\n",s);
	return 0;
}
