// scanf �Լ��� ���Ĺ��� ���
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ���: ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}