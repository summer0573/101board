#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 3; dan++)
	{
		for (int a = 1; a <= 9; a++)
		{
			printf("%d x %d = %d\n", dan, a, dan * a);
		}
	}


}