// 배열 A : 1	2	3	4
//		   5	6	7	8

// 배열 B : 1	5
//		   2	6
//		   3	7
//		   4	8

// 위 형태로 배열 A와 배열 B를 선언하고, 배열 A는 선언과 동시에 초기화를 진행
// 배열 B는 초기화를 진행하되, 배열 A에 저장된 값을 이용해 초기화를 진행

#include <stdio.h>

int main(void) {
	int arrA[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
	int arrB[4][2];
	int i, j;

	// 이동
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			arrB[j][i] = arrA[i][j];
		}
	}

	// 출력
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%2d", arrB[i][j]);
		}
		printf("\n");
	}
	return 0;
}