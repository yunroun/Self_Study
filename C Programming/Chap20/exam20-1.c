// 길이가 4 x 4인 int형 2차원 배열을 선언하고, 모든 요소를 알맞게 초기화해라.
// 그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 결과를 출력하라.

#include <stdio.h>

void ShowArr(int(*arr)[4]);
void RotateArr(int(*arr)[4]);

int main(void) {
	int i = 0;

	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	for (i = 0; i < 4; i++) {
		ShowArr(arr);
		RotateArr(arr);
	}

	return 0;
}

void ShowArr(int(*arr)[4]) {
	int i, j;
	printf("----Show Array----\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void RotateArr(int(*arr)[4]) {
	int i, j;
	int temp[4][4];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temp[j][3 - i] = arr[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = temp[i][j];
		}
	}
}