/*
  Binoy Das Gupta
  C program to count total number of vowels,consonants,digits or special character in a string.
  19-05-2021
*/

#include<stdio.h>
int main()
{
	char s[1000];
	int i,vowel,consonant,word,digit,other;
	printf("Enter a string = ");
	gets(s);
	vowel=consonant=word=digit=other=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vowel++;
		}
		else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
		{
			consonant++;
		}
		else if(s[i]==' ')
		{
			word++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	word++;
	printf("In the string :\n");
	printf("Number of vowels = %d\n",vowel);
	printf("Number of consonants = %d\n",consonant);
	printf("Number of digits = %d\n",digit);
	printf("Number of words = %d\n",word);
	printf("Number of others = %d\n",other);
	return 0;
}
