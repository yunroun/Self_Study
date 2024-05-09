// 아래에서 보이는 main 함수에서 물음표 ???를 대신할 수 있는 포인터 변수를 선언해보자.

#include <stdio.h>

int main(void) {
	int* arr1[5];
	int* arr2[3][5];

	// ??? = arr1;
	// ??? = arr2;
}

// 첫번째 ???: int** ptr1 = arr1;
// 두번째 ???: int* (*ptr2)[5] = arr2;