// ���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�, �̸� (��, ��, ��)�� ���·� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>

const int H = 60 * 60;
const int M = 60;

void SecondToHMS(int sec);

int main(void) {
	int sec;

	printf("��(second) �Է�: ");
	scanf_s("%d", &sec);
	SecondToHMS(sec);

	return 0;
}

void SecondToHMS(int sec) {
	int h, m, s;

	// �� ���ϱ�
	h = sec / H;
	sec = sec % H;

	// �� ���ϱ�
	m = sec / M;
	sec% sec% M;

	// �� ���ϱ�
	s = sec;

	printf("[h:%d, m:%d, s:%d] \n", h, m, s);
}