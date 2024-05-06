// 길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어 출력하는 프로그램 작성
// 홀수부터 출력하고 짝수 출력
// 단, 10개의 정수는 main 함수 내에서 입력 받도록 하고, 배열 내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해 호출

#include <stdio.h>

void ShowOdd(int* arr, int size);
void ShowEven(int* arr, int size);

int main(void) {
	int arr[10];
	int i;

	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	printf("홀수 출력: ");
	ShowOdd(arr, sizeof(arr) / sizeof(int));

	printf("짝수 출력: ");
	ShowEven(arr, sizeof(arr) / sizeof(int));

	return 0;
}

void ShowOdd(int* arr, int len) {		// 홀수 출력
	int i;
	for (i = 0; i < len; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

void ShowEven(int* arr, int len) {		// 짝수 출력
	int i;
	for (i = 0; i < len; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}