// 프로그램 사용자로부터 숫자 n을 입력 받고, 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램 작성
// 2^k <= n

#include <stdio.h>

int main(void) {
	int n, k;
	int inc = 1;

	printf("상수 n 입력: ");
	scanf_s("%d", &n);

	if (n == 0) {
		printf("만족하는 k 없음 \n");
		return 0;
	}

	for (k = 0; inc * 2 <= n; k++) {
		inc = inc * 2;
	}

	printf("공식을 만족하는 k: %d \n", k);
	return 0;
}