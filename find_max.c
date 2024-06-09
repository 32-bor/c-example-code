//  Finding max in an array

#include<stdio.h>
int find_max(int [],int);

int main()
{
	int myArray1[]={9,435,43,654,45,76,9,3,18};
	int myArray2[]={4,9,8,6,2};
	int max1=find_max(myArray1,9);
	int max2=find_max(myArray2,5);

	printf("Min in array 1: %d\n",max1);
	printf("Min in array 2: %d",max2);

	printf("\n");
	return 0;
}

int find_max(int array[],int size)
{
	int max=array[0];

	for(int i=1;i<size;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	return max;
}