#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("바꾸기 전 %d\n", A);
	//함수에 변수 A가 들어있는 값 3을 넘기는 것이지
	//변수 A 자체를 넘기는 것이 아니다
	changeA(A);
	printf("바꾸기 후 %d\n", A);
}
void changeA(int num)
{
	num = 5;
}