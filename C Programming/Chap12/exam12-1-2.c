// int�� ���� num1�� num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ�ϰ�,
// int�� ������ ���� ptr1�� ptr2�� �����Ͽ� ���� num1�� num2�� ����Ű�� ����.
// �� ���¿��� ������ ���� ptr1�� ptr2�� �̿��ؼ� num1�� ���� 10 ������Ű��, num2�� ���� 10 ���ҽ�Ű��.
// �� �� ������ ���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ���. ��, ptr1�� num2��, ptr2�� num1�� ����Ű�� �ϰ�, ptr1�� ptr2�� ����Ű�� ������ ����� ���� �������.

#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;
	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d \n", *ptr1, *ptr2);
	return 0;
}