// UsefulDoWhile.c�� while�� ������� �籸���� ���, ���¸� 2������ ���� �� �ִ�.
// ��� 2: while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.

#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);

	while (num != 0) {
		total += num;
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
	}
	printf("�հ�: %d \n", total);
	return 0;
}