#include <stdio.h>

int yue(int num, int num1);

int main()
{
	int i = 78, j = 60;
	printf("%d and %d 最大公约数%d, %d\n", i,j ,yue(78, 60), yue(60, 78));
	return 0;
}

int yue(int num, int num1)
{
	if(!(num % num1))
	{
		return num1;
	}
	return yue(num1, num % num1);
}


