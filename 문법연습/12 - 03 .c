#include <stdio.h>

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "ACE";

	printf("arr�� 0��° �� %d %d\n", arr[0], *arr);
	printf("arr�� 1��° �� %d %d\n", arr[1], *(arr + 1));
	printf("�����ϱ� *arr+1 %d \n\n", *arr + 1);

	printf("str�� 0��° �� %c %c\n", str[0], *str);
	printf("str�� 1��° �� %c %c\n", str[1], *(str + 1));
	printf("�����ϱ� *str+1 %c \n\n", *str + 1);
}
