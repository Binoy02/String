/*
  Binoy Das Gupta
  String reverse without using strrev()
  14-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	gets(s1);
	int i=0,length=0,j;
	while(s1[i]!='\0')
	{
		i++;
		length++;
	}
	for(j=0,i=length-1;i>=0;i--,j++)
	{
			s2[j]=s1[i];	
	}
	printf("Actual string = %s\n",s1);
	printf("Reversed string = %s\n",s2);
	return 0;
}
