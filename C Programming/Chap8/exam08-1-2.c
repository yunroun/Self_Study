// 두 개의 정수를 입력 받아 두 수의 차를 구하는 프로그램
// 무조건 큰 수에서 작은 수를 뺀 결과를 출력

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int result = 0;

	printf("정수 두 개를 입력하세요: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	if (inputOne > inputTwo) {
		result = inputOne - inputTwo;
	}
	else if (inputOne == inputTwo) {
		result = 0;
	}
	else {
		result = inputTwo - inputOne;
	}

	printf("두 수의 차는 %d입니다. \n", result);
	return 0;
}