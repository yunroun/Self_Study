// �� ���� ������ �Է� �޾� �� ���� ���� ���ϴ� ���α׷�
// ������ ū ������ ���� ���� �� ����� ���

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int result = 0;

	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	if (inputOne > inputTwo) {
		result = inputOne - inputTwo;
	}
	else if (inputOne == inputTwo) {
		result = 0;
	}
	else {
		result = inputTwo - inputOne;
	}

	printf("�� ���� ���� %d�Դϴ�. \n", result);
	return 0;
}