// printf 함수가 값을 반환하는가?에 대한 프로그램 실험

#include <stdio.h>

int main(void) {
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	return 0;
}