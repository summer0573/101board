#include <stdio.h>

void main(void)
{
	int input;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("피카츄 \n");

	}
	else if (input == 2)
	{
		printf("라이츄 \n");

	}
	else if (input == 3)
	{
		printf("파이리 \n");

	}
	else if (input == 4)
	{
		printf("꼬부기 \n");

	}
	else if (input == 5)
	{
		printf("버터풀 \n");

	}
	else if (input == 6)
	{
		printf("야도란 \n");

	}
	else
	{
		printf("잘 못 입력 했습니다.");
	}

}