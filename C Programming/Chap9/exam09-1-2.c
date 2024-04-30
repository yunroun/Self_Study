// ����(Celsius) �µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ�,
// �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� ����
// ������ ȭ���� �µ���ȯ�� ���� : Fah = 1.8 x Cel + 32

#include <stdio.h>

double CelToFah(double c) {		// ������ ȭ����
	return 1.8 * c + 32;
}
double FahToCel(double f) {		// ȭ���� ������
	return (f - 32) / 1.8;
}

int main(void) {
	int sel;
	double num;
	printf("1.������ ȭ����  2.ȭ���� ������ \n");
	printf("����>>");
	scanf_s("%d", &sel);

	if (sel == 1) {
		printf("���� �Է�: ");
		scanf_s("%lf", &num);
		printf("��ȯ�� ȭ��: %f \n", CelToFah(num));
	}
	else if (sel == 2) {
		printf("ȭ�� �Է�: ");
		scanf_s("%lf", &num);
		printf("��ȯ�� ����: %f \n", FahToCel(num));
	}
	else {
		printf("���� ���� \n");
	}
	return 0;
}