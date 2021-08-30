#include <stdio.h>

void main(void)
{
	int C_score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);

	if (C_score > 100 || C_score < 0)
		printf("잘못입력함");

	if (90 <= C_score && C_score <= 100)
		printf("A");
	else if (80 <= C_score && C_score < 90)
		printf("B");
	else if (70 <= C_score && C_score < 80)
		printf("C");
	else if (60 <= C_score && C_score < 70)
		printf("D");
	else if (50 >= C_score)
		printf("E");
	printf("\n");

	int java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &java_score);

	if (java_score > 100 || java_score < 0)
		printf("잘못입력함");

	if (90 <= java_score && java_score <= 100)
		printf("A");
	else if (80 <= java_score && java_score < 90)
		printf("B");
	else if (70 <= java_score && java_score < 80)
		printf("C");
	else if (60 <= java_score && java_score < 70)
		printf("D");
	else if (50 >= java_score)
		printf("E");
	printf("\n");

	int cp_score;
	printf("컴퓨터 구조 점수를 입력하시오 : ");
	scanf("%d", &cp_score);

	if (cp_score > 100 || cp_score < 0)
		printf("잘못입력함");

	if (90 <= cp_score && cp_score <= 100)
		printf("A");
	else if (80 <= cp_score && cp_score < 90)
		printf("B");
	else if (70 <= cp_score && cp_score < 80)
		printf("C");
	else if (60 <= cp_score && cp_score < 70)
		printf("D");
	else if (50 >= cp_score)
		printf("E");
}