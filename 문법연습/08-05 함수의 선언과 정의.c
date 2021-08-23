#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

void main()
{
	int c = sum(1, 2);
	printf("%d",c);
}