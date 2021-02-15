#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'A'; // 초기화하기
	printf("%c의 소문자는 %c입니다.\n", a, tolower(a));

	return 0;
}
