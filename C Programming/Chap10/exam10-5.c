// 10개의 소수(Prime Number)를 출력하는 프로그램 작성
// 정수 num이 1과 num으로 밖에 나눠지지 않는다면 소수에 해당한다

#include <stdio.h>

int IsPrime(int n);

int main(void) {
	int i = 2, cnt = 0;

	while (cnt != 10) {
		if (IsPrime(i) == 1) {
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	return 0;
}

int IsPrime(int n) {		// 소수면 true(1) 리턴
	int divisors = 0, i;

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisors++;
		}
	}

	if (divisors == 2) {
		return 1;
	}
	return 0;
}