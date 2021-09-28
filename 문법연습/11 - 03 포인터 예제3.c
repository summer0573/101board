#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 안에 들어있는 값 %d\n", num1);
	printf("num2 안에 들어있는 값 %d\n\n", num2);

	//int* ptr = &num1;
	int* ptr;
	ptr = &num1;

	*ptr = 4;	//ptr 값이 바뀜
	// V ptr이 num2를 가르킴
	ptr = &num2;
	*ptr = 40; //ptr 값이 바뀜
	printf("num1 안에 들어있는 값 %d\n", num1);
	printf("num2 안에 들어있는 값 %d\n\n", num2);
}