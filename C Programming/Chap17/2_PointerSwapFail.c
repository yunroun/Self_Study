// 두 개의 싱글 포인터 변수에 저장된 값을 서로 바꾸는 예제 (실패 예제)

#include <stdio.h>

void SwapIntPtr(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}

// p1은 ptr1과 별개이고, p2는 ptr2와 별개이기 때문에 값이 바뀌지 않은 것이다.