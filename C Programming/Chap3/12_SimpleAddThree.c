#include <stdio.h>

int main(void) {
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf_s("%d", &num1);		// ù ��° ���� �Է�
	printf("���� two: ");
	scanf_s("%d", &num2);		// �� ��° ���� �Է�

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}