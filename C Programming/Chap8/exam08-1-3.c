// �л��� ��ü ��������� ���� ������ ����ϴ� ���α׷� �ۼ�
// 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D, �� �̸��̸� F
// ����, ����, ������ ������ �Է� �ް�, ����� ���� �� ������ ����ϸ� �ȴ�.

#include <stdio.h>

int main(void) {
	int kor, eng, math;
	int avg;

	printf("����, ����, ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90) {
		printf("������ A�Դϴ�.");
	}
	else if (avg >= 80) {
		printf("������ B�Դϴ�.");
	}
	else if (avg >= 70) {
		printf("������ C�Դϴ�.");
	}
	else if (avg >= 50) {
		printf("������ D�Դϴ�.");
	}
	else {
		printf("������ F�Դϴ�.");
	}

	return 0;
}