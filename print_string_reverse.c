#include<stdio.h>
#include<string.h>

int main()
{
	int i,k;
	char str[50];
	printf("Enter a string\n");
	fflush(stdin);
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i];i++);
	str[i-1]='\0';
	for(i=0;str[i];i++);
	// printf("%s",str);
	for(k=i-1;k>=0;k--)
		printf("%c",str[k]);
	
	printf("\n");
	return 0;
}