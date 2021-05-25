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
		printf("주사위를 던져서 %d 이/가 나왔습니다.\n", dice);

		//던진 주사위 값을 현재 위치에 적용
		position += dice;
		printf("현재 위치 : %d , 현재 금액 : %lld \n\n", position, money);
		
		if (position == 20)
		{
			printf("현재 위치 : %d , 현재 금액 : %lld \n\n", position, money);
			printf("기부 천사! 재산의 20%를 사회에 기부합니다");
			money = (long long)(money * 0.8);
			printf("현재 위치 : %d, 현재 금액 : %lln \n\n", position, money);
		}
		




		if (position > 60)
		{

			printf("축하합니다! 은하수에 도착했습니다!\n");
			break;
		}
	
	}

	

}