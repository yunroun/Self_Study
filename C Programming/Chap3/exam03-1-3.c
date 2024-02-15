#include <stdio.h>

int main(void) {
	int num, result;

	printf("하나의 정수 입력: ");
	scanf_s("%d", &num);
	result = num * num;
	printf("%d \n", result);
}