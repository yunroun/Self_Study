// 인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의
// 예를 들어, 5를 입력하면 0에서 시작해서 총 5개의 피보나치 수열을 출력
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// 피보나치 수열은 세 번째 이후의 수열부터는 이전의 두 값의 합으로 구성된다.

#include <stdio.h>

void ShowFiboSeries(int num) {
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1) {
		printf("%d ", f1);
	}
	else {
		printf("%d %d ", f1, f2);
	}

	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int n;
	printf("출력하고자 하는 피보나치 수열의 갯수: ");
	scanf_s("%d", &n);
	if (n < 1) {
		printf("1이상의 값을 입력하세요. \n");
		return -1;
	}
	ShowFiboSeries(n);
	return 0;
}