#include <stdio.h>

void cal_grade(int score);

void main(void)
{
	int C_score;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int JAVA_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &JAVA_score);
	cal_grade(JAVA_score);

	int CP_score;
	printf("��ǻ�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &CP_score);
	cal_grade(CP_score);
}

//���� ��� �� ��� ����ϱ�
void cal_grade(int score)
{


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
	printf("\n");

}