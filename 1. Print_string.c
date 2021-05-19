/*
  Binoy Das Gupta
  C program to print a string.
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[5] = {'B','i','n','n','\0'}; // 1st example of a string declaration
	char s2[] = {'B','i','n','n','\0'}; // 2nd example of a string declaration
	char s3[] = "Binn";                // 3rd example of a string declaration
	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	return 0;
}
