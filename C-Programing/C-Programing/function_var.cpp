#include <stdio.h>

int yue(int num, int num1)
{
	if (!(num % num1))
	{
		return num1;
	}
	return yue(num1, num % num1);
}
void f_staticVar(void) {
    static int num = 10;
	num++;
	printf("num��%d\n", num);
}
// const ��ʾ
void f_constVar(void)
{
	const int num = 0;
	printf("������һ�����֣�");
	scanf_s("%d", &num);
	printf("num��%d\n", num);
	return ;
}

int main() {
	f_constVar();
	return 0;
}









