#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	int result;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("%d \n", result);
}