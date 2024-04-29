// UsefulDoWhile.c를 while문 기반으로 재구현할 경우, 형태를 2가지로 나눌 수 있다.
// 방법 1: 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.

#include <stdio.h>

int main(void) {
	int total = 0, num = 1;

	while (num != 0) {
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} 
	printf("합계: %d \n", total);
	return 0;
}