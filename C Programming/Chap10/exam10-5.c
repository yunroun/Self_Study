// 10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷� �ۼ�
// ���� num�� 1�� num���� �ۿ� �������� �ʴ´ٸ� �Ҽ��� �ش��Ѵ�

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

int IsPrime(int n) {		// �Ҽ��� true(1) ����
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