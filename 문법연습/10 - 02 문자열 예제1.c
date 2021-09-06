#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";
	char str2[20] = {
		'H','e','l','l','o',' ','W','o','r','l','d'
	};
	printf("%s \n", str);
	printf("%s \n", str2);
}