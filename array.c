#include<stdio.h>

void funArray();

int main()
{
	funArray();
	return 0;
}

void funArray()
{
	int i = 0, j = 0;
	int arr[3][5] = {0};
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			arr[i][j] = 10*i + j ;		
		}
	}

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%4d ", arr[i][j]);
		printf("\n");
	}
}
