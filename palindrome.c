// check if a string is palindrome in c //

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int is_palindrome(char [],int);

int main()
{
	char str[50];
	int i,x;
	printf("Enter a string:\n");
	// while(c=getchar()!='\n'){ }
	fflush(stdin);
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i];i++);
	str[i-1]='\0';
	for(i=0;str[i];i++);
	x=is_palindrome(str,i);

	if(x==0)
		printf("Not a palindrome");
	else
		printf("palindrome");

	printf("\n");
	return 0;
}

int is_palindrome(char s[],int length)
{
	int i,j;
	for(i=0,j=length-1;i<=length/2;i++,j--)
	{
		if(s[i]!=s[j])
			return 0;
	}
	return 1;
}
