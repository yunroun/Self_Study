// 두 개의 싱글 포인터 변수에 저장된 값을 서로 바꾸는 예제 (성공 예제)

#include <stdio.h>

void SwapIntPtr(int** dp1, int** dp2) {
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);		// ptr1과 ptr2으 주소 값 전달!
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}