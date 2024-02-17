#include <stdio.h>

int main(void) {
	int num;

	printf("0~127 사이 정수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("해당 정수의 아스키 코드 문자는 %c입니다. \n", num);
	return 0;
}