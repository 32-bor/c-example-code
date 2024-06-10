// Reverse an array //

#include<stdio.h>
#include<stdlib.h>
void reverse(int *,int);

int main()
{
	int i,size;
	printf("Enter the no of elements in the arrar:\n");
	scanf("%d",&size);
	int *a;
	a=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of the array:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

void reverse(int *a,int length)
{
	int i,j,temp;
	for(i=0,j=length-1;i<length/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

