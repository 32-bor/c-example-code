#include<stdio.h>

int main()
{
	int array[5];
	array[2]=5;
	printf("   array: %zu\n", array);
	printf(" array+1: %zu\n",array+1);

	printf("  &array: %zu\n", &array);
	printf("&array+1: %zu\n\n",&array+1);

	int matrix[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};

	printf("     matrix[1]:%zu\n",matrix[1]);
	printf("   matrix[1]+1:%zu\n",matrix[1]+1);
	printf("*(matrix[1]+1):%d\n\n",*(matrix[1]+1));

	printf("    &matrix[1]:%zu\n",&matrix[1]);
	printf("  &matrix[1]+1:%zu\n",&matrix[1]+1);
	printf("*(&matrix[1]+1):%d\n",*(&matrix[1]+1));

	int *p=(int*)(&matrix[1]+1);
	printf("%d\n",*p);


	return 0;

}