#include<stdio.h>
int find_min(int[],int);

int main()
{
	int myArray1[]={9,435,43,654,45,76,9,3,18};
	int myArray2[]={4,9,8,6,2};
	int min1=find_min(myArray1,9);
	int min2=find_min(myArray2,5);

	printf("Min in array 1:%d\n",min1);
	printf("Min in array 2:%d",min2);

	printf("\n");
	return 0;
}

int find_min(int array[],int size)
{
	int min=array[0];

	for(int i=0;i<size;i++)
	{
		if(array[i]<min)
			min=array[i];
	}
	return min;
}