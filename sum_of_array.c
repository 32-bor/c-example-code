#include<stdio.h>
int sum(int *,int);

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,100};
	printf("Sum of array elements:%d\n",sum(a,10));
	return 0;
}

int sum(int *a,int size)
{
	int array_sum=0;
	for(int i=0;i<size;i++)
	{
		array_sum+=a[i];
	}
	return array_sum;
}


