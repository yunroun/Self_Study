// 계속해서 정수를 입력 받으며, 값을 계속 더해 나간다.
// 사용자가 0을 입력하면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
#include <stdio.h>

int main(void) {
	int num = 1, sum = 0;

	while (num != 0) {
		printf("정수를 입력하세요: ");
		scanf_s("%d", &num);

		sum += num;
	}
	printf("정수의 총합은 %d입니다. \n", sum);
}