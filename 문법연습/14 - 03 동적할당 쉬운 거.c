#include <stdio.h>
//printf �Լ��� ������ ����
#include <stdlib.h>
//malloc, free �Լ��� ������ ����

void main(void)
{
	//�����Ҵ� (a, ptr1�� ���������̹Ƿ� stack������ �Ҵ�)
	int a = 3;
	int* ptr1 = &a;
	printf("%d \n", *ptr1);

	//�����Ҵ� (malloc���� �Ҵ�� ������ heap ������ �Ҵ�)
	//�ٸ� �������� ptr2�� stack ������ �Ҵ�
	int* ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = 10;
	printf("%d \n", *ptr2);
	free(ptr2);
}