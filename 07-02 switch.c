#include <stdio.h>

void main(void)
{
	int input;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��ī�� \n");

	}
	else if (input == 2)
	{
		printf("������ \n");

	}
	else if (input == 3)
	{
		printf("���̸� \n");

	}
	else if (input == 4)
	{
		printf("���α� \n");

	}
	else if (input == 5)
	{
		printf("����Ǯ \n");

	}
	else if (input == 6)
	{
		printf("�ߵ��� \n");

	}
	else
	{
		printf("�� �� �Է� �߽��ϴ�.");
	}

}