// 10진수 정수를 입력 받고 16진수로 출력

#include <stdio.h>

int main(void) {
	int num;

	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);

	printf("16진수 정수 출력: %x \n", num);
	return 0;
}