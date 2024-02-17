#include <stdio.h>

int main(void) {
	char str;

	printf("알파벳 문자 하나를 입력하세요: ");
	scanf_s("%c", &str);
	printf("해당 문자의 아스키 코드 값은 %d입니다. \n", str);
	return 0;
}