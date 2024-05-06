// 주소 값을 전달하는 형태의 함수호출: Call-by-reference

#include <stdio.h>

void Swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}