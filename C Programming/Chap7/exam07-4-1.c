// 두 개의 정수를 입력 받고, 두 정수를 포함해 그 사이에 존재하는 정수들의 합을 계산해 출력하는 프로그램 작성
// 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더 커야 한다.

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int total = 0;

	printf("두 개의 정수를 입력하세요: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	for (inputOne; inputOne < inputTwo + 1; inputOne++) {
		total += inputOne;
	}

	printf("정수들의 합은 %d입니다. \n", total);
	return 0;
}