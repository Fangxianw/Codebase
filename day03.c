#include<stdio.h>

//地址演示

int addr()
{
	int num = 10;
	printf("&num is %d\n", &num);
	printf("tration(&num) is %d\n", *(&num));
	printf("&(*(&num))) is %d\n", &(*(&num)));
	return 0;
}

// 09 scanf demonstration
int scanfDemo()
{
	int num = 0, num1 = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("num is %d\n", num);
	/*scanf("%*[^\n]");
	scanf("%*c");*/

	printf("Please enter a number: ");
	scanf("%d", &num1);
	printf("num1 is %d\n", num1);
	return 0;
}

// 11 special character demonstration
int specialChar()
{
	printf("abcd\ref\n");
	printf("abcd\tef\n");
	printf("abc\tef\n");
	return 0;
}

// 操作符
int operationChar()
{
	printf("15 / 4 is %d\n", 15 / 4);
	printf("15 %% 7 is %d\n", 15 % 7);
	return 0;
}

int fxdemo1()
{
	int i=0,j=0;
	for(j=5;j> 0;j--)
	{
		for(i = 5; i > 5-j; i--)
			printf("%d", i);
		printf("\n");
	}
	
	float length = -1.00,width = -1.00;
	printf("Please enter length of rectangle: ");
	scanf("%f", &length);
	scanf("%*[^\n]");
	scanf("%*c");
	printf("Please enter width of rectangle: ");
	scanf("%f", &width);
	printf("The area of rectangle is: %6.2f\n", length*width);

	return 0;
}

int main()
{
	//addr();
    //specialChar();
	//operationChar();
	fxdemo1();
	return 0;
}
