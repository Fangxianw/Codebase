#include <stdio.h>
#include <stdlib.h>

void func();
void neg(int arr[], int size);
int writeFile();
int readFile();

int main()
{
	writeFile();
	readFile();
	return 0;
}

/* exit 函数演示 */
void func()
{
	printf("2\n");
	//return 0;
	exit(0);
	printf("3\n");
}

//数组做形式参数演示
void neg(int arr[], int size)
{
	int num = 0;
	for(num = 0; num <= size - 1; num ++)
	{
		arr[num] = 0 - arr[num];
	}
}

// 文件代码框架演示
int writeFile()
{
	FILE *p_file = fopen("a.bin", "wb");
	if(!p_file)
	{
		printf("Failed to open file.\n");
		return -1;
	}

	int arr[] = {1,2,3,4,5};
	fwrite(arr, sizeof(arr), 5, p_file);

	fclose(p_file);
	p_file = NULL;
	return 0;

}

int readFile()
{
	int arr[5] = {}, num = 0;
	FILE *p_file = fopen("a.bin", "rb");
	if(!p_file)
	{
		printf("Failed to open file.\n");
		return -1;
	}

	fread(arr, sizeof(int), 5, p_file);
	fclose(p_file);
	p_file = NULL;
	for(num = 0; num <= 4; num++)
	{
		printf("%d ", arr[num]);
	}
	printf("\n");

	return 0;
}
