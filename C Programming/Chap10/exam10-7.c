// ���α׷� ����ڷκ��� ���� n�� �Է� �ް�, ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷� �ۼ�
// 2^k <= n

#include <stdio.h>

int main(void) {
	int n, k;
	int inc = 1;

	printf("��� n �Է�: ");
	scanf_s("%d", &n);

	if (n == 0) {
		printf("�����ϴ� k ���� \n");
		return 0;
	}

	for (k = 0; inc * 2 <= n; k++) {
		inc = inc * 2;
	}

	printf("������ �����ϴ� k: %d \n", k);
	return 0;
}