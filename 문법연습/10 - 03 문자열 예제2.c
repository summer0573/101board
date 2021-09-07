#include <stdio.h>

void main(void)
{
	char str[] = "Hello World";
	printf("%d\n", sizeof(str));

	//문자열의 갯수를 생각하지 않고 널문자 여부만을 확인
	//문자의 끝에 도달 할 때 까지 반복 (추천 방법)
	for (int i = 0; str[i] !='\0'; i++)
		printf("%c", str[i]);
}