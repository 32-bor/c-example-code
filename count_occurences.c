// Count the occurences of a value in an array //

#include<stdio.h>
#include<stdlib.h>
int occurences(int*,int,int);

int main()
{
	int i,size,occurs;
	int element;
	printf("Enter the no of elements in the arrar:\n");
	scanf("%d",&size);
	int *a;
	a=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of the array:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("which element do you want to count in the array\n");
	scanf("%d",&element);
	occurs=occurences(a,size,element);
	printf("%d occurs %d times in the array\n",element,occurs);
	printf("\n");
	return 0;
}

int occurences(int *a,int size, int element)
{
	int i,count=0;

	for(i=0;i<size;i++)
		if(a[i]==element)
			count++;
	return count;
}



