#include <stdio.h>

void main(void)
{
	char str[] = "Hello World";
	printf("%d\n", sizeof(str));

	//���ڿ��� ������ �������� �ʰ� �ι��� ���θ��� Ȯ��
	//������ ���� ���� �� �� ���� �ݺ� (��õ ���)
	for (int i = 0; str[i] !='\0'; i++)
		printf("%c", str[i]);
}