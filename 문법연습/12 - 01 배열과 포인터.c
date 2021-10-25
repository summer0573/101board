#include <stdio.h>

void main(void) {
	int arr[4];
	int* ptr;

		printf("0 배열 공간의 주소 출력 : %p\n", &arr[0]);
		printf("배열 시작 주소 출력 : %p\n", arr);
		printf("1 배열 공간의 주소 출력 : %p\n", &arr[1]);

	printf("\n\n");
	char str[4];

		printf("0 배열 공간의 주소 출력 : %p\n", &str[0]);
		printf("배열 시작 주소 출력 : %p\n", str);
		printf("1 배열 공간의 주소 출력 : %p\n", &arr[1]);
}