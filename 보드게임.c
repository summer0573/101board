/*
* ���尳��
*�� 40ĭ
* �÷����� �Ӽ�
	1.�� : 20.000,000 ����
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

	//������ �� ��
	const int finish = 60;

	//���� 2��
	int money = 20000000;
	srand(time(0));

	printf("���� ��ġ : %d, ���� �ݾ� : %d \n\n", position, money);

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
		printf("���� ��ġ : %d , ���� �ݾ� : %d \n\n", position, money);

		
		switch (position)
		{
			//TODO:printf �ߺ��� �ڵ� �����ϱ�

		case 10:
			printf("[[����! ��ġ 10�� ��, �ֻ����� �� �� �� �����ϴ�.]] \n");
			printf("[���� �� x 100000 �� ��� �˴ϴ�.]] \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("�ֻ��� %d�� ���ͼ� %d���� ȹ���Ͽ����ϴ�. \n\n", dice_money, 100000 * dice_money);
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;

		case 20:
			printf("[[��� õ��! ��ġ 20�� ��, ����� 20%%�� ��ȸ�� ����մϴ�]]\n\n");
			money = (long long)(money * 0.8);
			printf("���� ��ġ : %d, ���� �ݾ� : %d \n\n", position, money);
			break;

		case 30:
			printf("[[����! ��ġ 30�� ��, ���� �ֻ����� �� ��ŭ �� ���ư��ϴ�.]]\n\n");
			position += dice;
			printf("���� ��ġ : %d, ���� �ݾ� : %d \n\n", position, money);
			break;

		case 59:
			printf("[[��Ȧ! ��ġ 59�� ������ ó�� �������� ���ư��ϴ�.]]\n\n");
			position = 0;
			printf("���� ��ġ : %d , ���� �ݾ� : %d \n\n", position, money);
			break;
		}


		if (position == finish)
		{
			printf("[[�����մϴ�! ��ġ �� ���� ���� ��, �������� 2�谡 �˴ϴ�!]]\n\n");
			money *= 2;
			printf(">>%d���� ������ϴ�.<<\n", money);
			printf("���� ��ġ : %d , ���� �ݾ� : %d \n\n", position, money);
		}


		if (position>=finish)
		{
			printf("[[�����մϴ�! ���ϼ��� �����߽��ϴ�!]]\n");
			break;
		}
	}

	

}