#include <stdio.h>

void main(void)
{

	/*while��
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
			continue; //�ٱ��� for���� ���� continue(4�ܸ� skip)
			//break; //�ٱ��� for���� ���� break (���� 3������)

		for (int a = 1; a <= 9; a++)
			if (a == 5)
				continue; //���� for���� ���� continue(�� 5�� skip)
				//break; //���� for���� ���� break (���� 4������)

		printf("%d x %d = %d\n", dan, a, dan * a);
		printf("\n");
	}


}