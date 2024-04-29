// do~while문을 사용해 0을 입력받을 때까지의 정수 합 계산

#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	do {
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);
	return 0;
}