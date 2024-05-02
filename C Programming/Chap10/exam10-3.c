// 두 개의 정수를 입력 받아 최대 공약수(GCD)를 구하는 프로그램 작성

#include <stdio.h>

int GCM(int num1, int num2);

int main(void) {
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	printf("GCM: %d \n", GCM(num1, num2));
	return 0;
}

int GCM(int num1, int num2) {
	int result;
	result = num1;
	while (num1 % result != 0 || num2 % result != 0) {
		result--;
	}
	return result;
}