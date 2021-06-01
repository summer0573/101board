/*
* 보드개임
*총 40칸
* 플레이의 속성
	1.돈 : 2.000,000,000(단위 : 백만) 시작
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

	//시작 2억
	long long money = 2000000000;
	srand(time(0));

	printf("현재 위치 : %d, 현재 금액 : %lld \n\n", position, money);

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
		printf("현재 위치 : %d , 현재 금액 : %lld \n\n", position, money);

		
		switch (position)
		{
			//TODO:printf 중복된 코드 제거하기

		case 10:
			printf("[[주사위를 한 번 더 던집니다.]] \n");
			printf("[나온 수 x 100000 을 얻게 됩니다.]] \n");
			getchar();
			dice = rand() % 6 + 1;
			money += 100000 * dice;
			printf("주사위 %d이 나와서 %d원을 획득하였습니다. \n\n",dice, 100000 * dice);
			printf("현재위치 : %d, 현재금액 : %lld \n\n", position, money);
			break;

		case 20:
			printf("[[기부 천사! 재산의 20%%를 사회에 기부합니다]]\n\n");
			money = (long long)(money * 0.8);
			printf("현재 위치 : %d, 현재 금액 : %lld \n\n", position, money);
			break;

		case 30:
			printf("[[던진 주사위의 수 만큼 더 나아갑니다.]]\n\n");
			position += dice;
			printf("현재 위치 : %d, 현재 금액 : %lld \n\n", position, money);
			break;

		case 59:
			printf("[[위치 59에 있을시 처음 지점으로 돌아갑니다.]]\n\n");
			position = 0;
			printf("현재 위치 : %d , 현재 금액 : %lld \n\n", position, money);
			break;
		}


		if (position>=60)
		{
			printf("[[축하합니다! 은하수에 도착했습니다!]]\n");
			break;

		}
	}

	

}