// 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
// int* maxPtr;
// int* minPtr;
// int arr[5];
// MaxAndMin이란 함수를 정의하고 호출하여 위의 배열과 두 포인터 변수에 대한 정보를 전달.
// 어떠한 정보를 전달할지는 자유이며, 함수호출이 완료되면 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열요소의 주소 값,
// minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값이 저장.

#include <stdio.h>

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr) {
	int* max, * min;
	int i;

	max = min = &arr[0];
	for (i = 0; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*mxPtr = max;
	*mnPtr = min;
}

int main(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("정수 입력 %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	return 0;
}