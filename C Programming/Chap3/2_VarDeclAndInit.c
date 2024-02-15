#include <stdio.h>

// Visual Studio 2022에서
// 일반적인 변수 선언으로 쓰레기 값을 부여하고 디버깅하면 에러가 뜸
// 쓰레기 값 출력을 위해 포인터 선언, 초기화 및 출력

int main(void) {
	int num1, num2;		// 변수 num1, num2의 선언
	int num3 = 30, num4 = 40;	// 변수 num3, num4의 선언 및 초기화

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("num1: %d, num2: %d \n", *ptr1, *ptr2);
	num1 = 10;		// 변수 num1의 초기화
	num2 = 20;		// 변수 num2의 초기화

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	return 0;
}