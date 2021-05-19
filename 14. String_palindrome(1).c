/*
  Binoy Das Gupta
  Check if a string is palindrome or not
  19-05-2021
*/

#include<stdio.h>
int main()
{
	char s1[30],s2[30];
	gets(s1);
	int i=0,length=0,j,count;
	while(s1[i]!='\0')
	{
		i++;
		length++;
	}
	for(j=0,i=length-1;i>=0;i--,j++)
	{
		s2[j]=s1[i];
	}
	s2[j]='\0';
	printf("S1 = %s\n",s1);
	printf("S2 = %s\n",s2);
	j=0,count=0;
	while(s1[j]!='\0')
	{
		if(s1[j]!=s2[j])
		{
			count++;
			break;
		}
		j++;
	}
	if(count==0)
	{
		printf("String is palindrome\n");
	}
	else
	{
		printf("String is not palindrome\n");
	}
	return 0;
}
