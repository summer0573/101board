#include <stdio.h>

void main(void)
{

	/*while문
	int dan = 2;
	while (dan <= 3)
	{
		int i = 1;
		while (i <= 9)
		{
			printf("%d x %d = %d\n", dan, i, dan * i);
			i++;
		}
		dan++;
	}*/

	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
			continue; //바깥쪽 for문에 대한 continue(4단만 skip)
			//break; //바깥쪽 for문에 대한 break (단은 3까지만)

		for (int a = 1; a <= 9; a++)
			if (a == 5)
				continue; //안쪽 for문에 대한 continue(수 5만 skip)
				//break; //안쪽 for문에 대한 break (수는 4까지만)

		printf("%d x %d = %d\n", dan, a, dan * a);
		printf("\n");
	}


}