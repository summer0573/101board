#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
	float avg;		//평균
	int sub[3];		//과목

	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &sub[0]);
	cal_grade(sub[0]);

	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &sub[1]);
	cal_grade(sub[1]);

	int CP_score;
	printf("컴퓨터 구조 점수를 입력하시오 : ");
	scanf("%d", &sub[2]);
	cal_grade(sub[2]);

	avg = average(sub[0], sub[1], sub[2]);

	printf("점수의 평균은 %f점 입니다.", avg);
}

//점수 계산 후 등급 출력하기
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

//세 점수이 평균을 반환
float average(int a, int b, int c)
{
	return (a + b + c) / 3.f; //3을 float로 만듬
}