// �� ���� ���� �߿��� ������ ū ���� ��ȯ�ϴ� �Լ� ����
// ���ڷ� ���޵� ������ ������ �Ի��ϴ� ������ ����� �� �ִ� �Լ� ���� ����, �߰��� �̸� ȣ��

#include <stdio.h>
int AbsoCompare(int num1, int num2);		// ������ ū ���� ��ȯ
int GetAbsoValue(int num);			// ���������� ������ ��ȯ

int main(void) {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d \n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}
}

int GetAbsoValue(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
}