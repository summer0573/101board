#include <stdio.h>

void main(void)
{
	//정적할당 (컴파일 시간에 16바이트로 결정)
	int arr[4] = { 10,20,30,40 };

	int length;
	printf("배열의 길이를 입력하세요 :");
	scanf("%d", &length);

	void* ptr = malloc(length);
}