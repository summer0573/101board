#include <stdio.h>

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	int* ptr = arr;

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2));
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2));
	//�����͸� �迭ó�� �� �� �ִ�.
	//������ �����ʹ� �迭�� �ƴϴ�.
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d\n", *(ptr+0), *(ptr+1), *(ptr + 2));


	printf("�迭�� ũ�� : %d\n", sizeof(arr));					//4����Ʈ�� 4��=16����Ʈ
	printf("�������� ũ�� : %d\n", sizeof(ptr));				//4����Ʈ
}
