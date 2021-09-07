#include <stdio.h>

void main(void)
{
	
	char str[20] = "Hello World";
	
	str[7] = '\0';
	printf("%s\n", str);
}