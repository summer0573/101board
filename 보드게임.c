/*
* 보드개임
*총 40칸
* 플레이의 속성
	1.돈 : 20.000,000 시작
	2. 현재위치 : 0부터 시작
	3. 황금열쇠
		원하는 곳 갈 수 있음
		돈을 랜덤하게 준다(-5억~+5억)
		TODO : 돈을 뺐음
*주사위 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//플레이어의 위치((0부터 시작
	int position = 0;

	//주사위 1~6
	int dice;

	//공간의 끝 점
	const int finish = 60;

	//시작 2억
	int money = 20000000;
	srand(time(0));

	printf("현재 위치 : %d, 현재 금액 : %d \n\n", position, money);

	//무한반복
	while (1)
	{
		//엔터 누르면 계속
	getchar();


	// 주사위는 1 ~ 6까지 나오게 설정
		dice = rand() % 6 + 1;
		printf(">>주사위를 던져서 %d 이/가 나왔습니다.<<\n", dice);

		//던진 주사위 값을 현재 위치에 적용
		position += dice;
		printf("현재 위치 : %d , 현재 금액 : %d \n\n", position, money);

		
		switch (position)
		{
			//TODO:printf 중복된 코드 제거하기

		case 10:
			printf("[[지원금 도착! 위치 10일 때, 주사위를 한 번 더 던집니다.]] \n");
			printf("[나온 수 x 100000 을 얻게 됩니다.]] \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("주사위 %d이 나와서 %d원을 획득하였습니다. \n\n", dice_money, 100000 * dice_money);
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;

		case 20:
			printf("[[기부 천사! 위치 20일 때, 재산의 20%%를 우주정거장에 기부합니다]]\n\n");
			money = (long long)(money * 0.8);
			printf("현재 위치 : %d, 현재 금액 : %d \n\n", position, money);
			break;

		case 30:
			printf("[[조종기가 고장! 위치 30일 때, 던진 주사위의 수 만큼 더 나아갑니다.]]\n\n");
			position += dice;
			printf("현재 위치 : %d, 현재 금액 : %d \n\n", position, money);
			break;

		case 49: //3턴 동안 움직이지 못함.
			printf("[[불시착! 엔진이 고장 났습니다. 3턴 동안 움직일 수 없습니다.]]\n");
			printf("[[주사위 3이 나올 시, 본부의 지원이 도착합니다.]]\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d 턴 입니다\n",i);
				dice = rand() % 6 + 1;
				//주사위를 던져서 3이 나오면 탈출
				printf("주사위가 %d이 나왔습니다.\n\n", dice);

				if (dice == 3)
				{
					printf("3이 나왔습니다. 본부의 지원이 도착했습니다.\n");
					break;
				}
			}
			printf("엔진을 성공적으로 고쳤습니다.\n");
			printf("현재 위치 : %d, 현재 금액 : %d \n\n", position, money);
			break;


		case 59:
			printf("[[블랙홀! 위치 59에 있을시 처음 지점으로 돌아갑니다.]]\n\n");
			position = 0;
			printf("현재 위치 : %d , 현재 금액 : %d \n\n", position, money);
			break;
		}


		if (position == finish)
		{
			printf("[[축하합니다! 위치 끝 점에 있을 시, 소지금이 2배가 됩니다!]]\n\n");
			money *= 2;
			printf(">>%d원을 얻었습니다.<<\n", money);
			printf("현재 위치 : %d , 현재 금액 : %d \n\n", position, money);
		}


		if (position>=finish)
		{
			printf("[[축하합니다! 은하수에 도착했습니다!]]\n");
			break;
		}
	}

	

}