#include <stdio.h>

void main(void)
{
	int score;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
		printf("�߸��Է��Ԥ�����");

	if (90 <= score && score <= 100)
		printf("A");
	else if (80 <= score && score < 90)
		printf("B");
	else if (70 <= score && score < 80)
		printf("C");
	else if (60 <= score && score < 70)
		printf("D");
	else if (50 >= score)
		printf("E");
}