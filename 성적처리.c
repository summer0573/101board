#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
	float avg;		//���
	int sub[3];		//����

	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &sub[0]);
	cal_grade(sub[0]);

	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &sub[1]);
	cal_grade(sub[1]);

	int CP_score;
	printf("��ǻ�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &sub[2]);
	cal_grade(sub[2]);

	avg = average(sub[0], sub[1], sub[2]);

	printf("������ ����� %f�� �Դϴ�.", avg);
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

//�� ������ ����� ��ȯ
float average(int a, int b, int c)
{
	return (a + b + c) / 3.f; //3�� float�� ����
}