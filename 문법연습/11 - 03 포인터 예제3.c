#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 �ȿ� ����ִ� �� %d\n", num1);
	printf("num2 �ȿ� ����ִ� �� %d\n\n", num2);

	//int* ptr = &num1;
	int* ptr;
	ptr = &num1;

	*ptr = 4;	//ptr ���� �ٲ�
	// V ptr�� num2�� ����Ŵ
	ptr = &num2;
	*ptr = 40; //ptr ���� �ٲ�
	printf("num1 �ȿ� ����ִ� �� %d\n", num1);
	printf("num2 �ȿ� ����ִ� �� %d\n\n", num2);
}