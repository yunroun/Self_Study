// exam08-1-2.c를 조건 연산자 형태로 프로그램 작성하자

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int result = 0;

	printf("정수 두 개를 입력하세요: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	result = (inputOne > inputTwo) ? (inputOne - inputTwo) : (inputTwo - inputOne);

	printf("두 수의 차는 %d입니다. \n", result);
	return 0;
}