// 배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의 (함수 이름: DesSort)
// 길이가 7인 int형 배열을 선언해서 7개의 정수를 입력 받고, 내림차순으로 정렬하기 위해 배열을 인자로 전달하면서 DesSort 함수를 호출

#include <stdio.h>

void DesSort(int* arr, int size);

int main(void) {
	int arr[7];
	int i;

	for (i = 0; i < 7; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr, 7);

	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void DesSort(int* arr, int len) {
	int i, j, temp;

	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < (len - 1) - i; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}