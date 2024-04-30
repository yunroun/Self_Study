// 두 개의 정수 중에서 절댓값이 큰 수를 반환하는 함수 정의
// 인자로 전달된 정수의 절댓값을 게산하는 과정을 대신할 수 있는 함수 별도 정의, 중간에 이를 호출

#include <stdio.h>
int AbsoCompare(int num1, int num2);		// 절댓값이 큰 정수 반환
int GetAbsoValue(int num);			// 전달인자의 절댓값을 반환

int main(void) {
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}
}

int GetAbsoValue(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
}