/*
* ���尳��
*�� 40ĭ
* �÷����� �Ӽ�
	1.�� : 2.000,000,000(���� : �鸸) ����
	2. ������ġ : 0���� ����
	3. Ȳ�ݿ���
		���ϴ� �� �� �� ����
		���� �����ϰ� �ش�(-5��~+5��)
		TODO : ���� ����
*�ֻ��� 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//�÷��̾��� ��ġ((0���� ����
	int position = 0;

	//�ֻ��� 1~6
	int dice;

	//���� 2��
	long long money = 2000000000;
	srand(time(0));

	printf("���� ��ġ : %d, ���� �ݾ� : %lld \n\n", position, money);

	//���ѹݺ�
	while (1)
	{
		//���� ������ ���
	getchar();


	// �ֻ����� 1 ~ 6���� ������ ����
		dice = rand() % 6 + 1;
		printf(">>�ֻ����� ������ %d ��/�� ���Խ��ϴ�.<<\n", dice);

		//���� �ֻ��� ���� ���� ��ġ�� ����
		position += dice;
		printf("���� ��ġ : %d , ���� �ݾ� : %lld \n\n", position, money);

		
		switch (position)
		{
			//TODO:printf �ߺ��� �ڵ� �����ϱ�

		case 10:
			printf("[[�ֻ����� �� �� �� �����ϴ�.]] \n");
			printf("[���� �� x 100000 �� ��� �˴ϴ�.]] \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("�ֻ��� %d�� ���ͼ� %d���� ȹ���Ͽ����ϴ�. \n\n",dice_money, 100000 * dice_money);
			printf("������ġ : %d, ����ݾ� : %lld \n\n", position, money);
			break;

		case 20:
			printf("[[��� õ��! ����� 20%%�� ��ȸ�� ����մϴ�]]\n\n");
			money = (long long)(money * 0.8);
			printf("���� ��ġ : %d, ���� �ݾ� : %lld \n\n", position, money);
			break;

		case 30:
			printf("[[���� �ֻ����� �� ��ŭ �� ���ư��ϴ�.]]\n\n");
			position += dice;
			printf("���� ��ġ : %d, ���� �ݾ� : %lld \n\n", position, money);
			break;

		case 59:
			printf("[[��ġ 59�� ������ ó�� �������� ���ư��ϴ�.]]\n\n");
			position = 0;
			printf("���� ��ġ : %d , ���� �ݾ� : %lld \n\n", position, money);
			break;
		}


		if (position>=60)
		{
			printf("[[�����մϴ�! ���ϼ��� �����߽��ϴ�!]]\n");
			break;

		}
	}

	

}