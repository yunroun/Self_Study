// exam08-1-2.c�� ���� ������ ���·� ���α׷� �ۼ�����

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int result = 0;

	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	result = (inputOne > inputTwo) ? (inputOne - inputTwo) : (inputTwo - inputOne);

	printf("�� ���� ���� %d�Դϴ�. \n", result);
	return 0;
}