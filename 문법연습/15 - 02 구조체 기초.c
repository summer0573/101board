#include <stdio.h>

//8byte
typedef struct point {
	int x;
	int y;
}point;

void main(void)
{
	//선언과 동시에 초기화 p1.x는 10 p1.y는 20
	point p1 = { 10,20 };
	//point p2; //에러발생 반드시 struct를 넣어야함
	struct point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d)\n",p1.x,p1.y);
	printf("(%d, %d)\n",p2.x,p2.y);
	printf("구조체의 크기는 %d", sizeof(struct point));
}