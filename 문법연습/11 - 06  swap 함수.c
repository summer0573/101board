#include <stdio.h>

void swap(int num1, int num2);

void main(void) 
{
	int a = 6, b = 20;
	printf("바꾸기 전 a:%d b:%d\n", a, b);
	swap(&a, &b);
	printf("바꾸기 전 a:%d b:%d\n", a, b);
}

void swap(int* num1, int* num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp; 
}