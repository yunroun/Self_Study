// 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성
// 정수는 반드시 1 이상이어야 한다. 1 미만의 수가 입력되는 경우 입력으로 인정하지 않고 재입력을 요구한다.
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0, sum = 0;

	while (loop < 5) {
		printf("%d번째 정수를 입력하세요: ", loop + 1);
		scanf_s("%d", &num);
		sum += num;
		loop += 1;

		while (num < 1) {
			printf("1 이상의 정수만 입력해주세요. \n");
			sum -= num;
			loop -= 1;
			num = 1;
		}
	}

	printf("5개의 정수의 합은 %d입니다. \n", sum);
}