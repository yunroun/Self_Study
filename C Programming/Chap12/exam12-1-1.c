// �Ʒ� ���� ���� �� ���Ť����� ������ ������ ���踦 �����϶�. ����� ����� �����غ���.

#include <stdio.h>

int main(void) {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}

// ptr1�� ptr2�� ���ÿ� ���� num�� ����Ų��.
// �� ������ ���� ��� ���� num�� ����Ű�Ƿ�, ����� ����� 12�� �ȴ�.