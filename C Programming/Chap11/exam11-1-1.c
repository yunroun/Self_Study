// 길이가 5인 int형 배열을 선언해서 사용자로부터 총 5개의 정수 입력 받고, 다음의 내용을 출력
// 입력된 정수 중에서 최댓값
// 입력된 정수 중에서 최솟값
// 입력된 정수의 총 합
// 단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값'을 계산해야 한다.

#include <stdio.h>

int main(void) {
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++) {
		sum += arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총 합: %d \n", sum);
	return 0;
}