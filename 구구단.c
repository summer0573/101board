#include <stdio.h>

void main(void)
{

	/*while¹®
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
		for (int a = 1; a <= 9; a++)
		{
			printf("%d x %d = %d\n", dan, a, dan * a);
		}
		printf("\n");
	}


}