// �� ���� ������ �Է� �ް�, �� ������ ������ �� ���̿� �����ϴ� �������� ���� ����� ����ϴ� ���α׷� �ۼ�
// ù ��° �ԷµǴ� �������� �� ��° �ԷµǴ� ������ �� Ŀ�� �Ѵ�.

#include <stdio.h>

int main(void) {
	int inputOne, inputTwo;
	int total = 0;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &inputOne, &inputTwo);

	for (inputOne; inputOne < inputTwo + 1; inputOne++) {
		total += inputOne;
	}

	printf("�������� ���� %d�Դϴ�. \n", total);
	return 0;
}