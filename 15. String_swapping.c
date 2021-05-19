/*
  Binoy Das Gupta
  String swapping
  17-05-2021
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	char temp[30];
	gets(s1);
	gets(s2);
	printf("Before swapping :\n");
	printf("S1 = %s\n",s1);
	printf("S2 = %s\n",s2);
	
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
	
	printf("After swapping :\n");
	printf("S1 = %s\n",s1);
	printf("S2 = %s\n",s2);
	
	return 0;
}
