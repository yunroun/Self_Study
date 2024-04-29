// 다음 수식인 계승(factorial)을 계승하는 프로그램을 작성
// n! = 1 x 2 x 3 x ... x n
// 프로그램 사용자로부터 n에 해당하는 정수를 입력 받고, n의 계승 n!를 계산해서 출력

#include <stdio.h>

int main(void) {
	int i, num = 0;
	int total = 1;		// 팩토리얼의 계산 결과 저장

	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		total *= i;
	}

	printf("%d! = %d입니다.", num, total);
	return 0;
}