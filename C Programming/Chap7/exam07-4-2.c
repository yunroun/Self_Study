// ���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ�
// n! = 1 x 2 x 3 x ... x n
// ���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �ް�, n�� ��� n!�� ����ؼ� ���

#include <stdio.h>

int main(void) {
	int i, num = 0;
	int total = 1;		// ���丮���� ��� ��� ����

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		total *= i;
	}

	printf("%d! = %d�Դϴ�.", num, total);
	return 0;
}