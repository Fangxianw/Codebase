#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fxFunc1()
{
	int num5 = 0, num2 = 0;
	printf("5元 2元 1元\n");
	for(num5 = 0; num5 <= 2; num5++)
		for(num2 = 0; num2 <= (10-5*num5)/2;num2 ++)
			printf("%d %d %d\n", num5,num2,10-5*num5-2*num2);
}
void fxFunc2()
{
	//int num = 100;//, i= 0;
	//scanf("%d", &num);
	//int a[num];	
	srand(time(0));
	printf("%d ", rand());
	printf("%d ", rand());
	printf("%d \n", rand());
}

int main()
{
	fxFunc1();
	fxFunc2();
	return 0;
}
