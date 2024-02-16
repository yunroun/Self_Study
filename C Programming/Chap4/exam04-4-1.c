#include <stdio.h>

int main(void) {
	int num;

	printf("정수 한 개를 입력하세요: ");
	scanf_s("%d", &num);
	printf("%d \n", ~num + 1);
	return 0;
}