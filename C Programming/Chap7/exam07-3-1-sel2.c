// UsefulDoWhile.c를 while문 기반으로 재구현할 경우, 형태를 2가지로 나눌 수 있다.
// 방법 2: while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.

#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	printf("정수 입력(0 to quit): ");
	scanf_s("%d", &num);

	while (num != 0) {
		total += num;
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
	}
	printf("합계: %d \n", total);
	return 0;
}