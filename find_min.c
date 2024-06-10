// Finding min in an array //

#include<stdio.h>
int find_min(int[],int);

int main()
{
	int myArray1[]={9,5,4,12,45,7,9,3,18};
	int myArray2[]={4,9,8,6,2};
	int min1=find_min(myArray1,9);
	// int min2=find_min(myArray2,5);

	printf("\nMin in array :%d\n",min1);
	// printf("Min in array 2:%d",min2);

	printf("\n");
	return 0;
}

int find_min(int array[],int size)
{
	int min=array[0];

	for(int i=1;i<size;i++)
	{
		printf("Checking myArray[%d] = %d:\n", i,array[i]);
		if(array[i]<min)
		{
			min=array[i];
			printf("New min found: %d\n",array[i]);
		}
	}
	return min;
}