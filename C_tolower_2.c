#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'A';
	printf("%c의 소문자는 %c입니다.\n", a, tolower(a));

	return 0;
}
