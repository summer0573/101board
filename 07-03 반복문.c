#include <stdio.h>

void main(void)
{
	int num = 5;
	//무한반복
	while (1)
	{
		if (num == 0)
			break;
		printf("사랑해!!!\n");
		num--;
	}
}