#include <stdio.h>

void main(void)
{
	//�迭(array) ����� ���ÿ� �ʱ�ȭ
	int arr[4] = { 10, 20, 30, 40 };

	//�迭�� �����ּ�(��)�� ���
	printf("%p\n", arr);

	//�迭�� �� ��ҵ��� ��� (������ ��)
	//�߿�vv
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	//printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
}