// if~else�� ��� ����

#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("�Է� ���� 0���� �۴�. \n");
	}
	else {
		printf("�Է� ���� 0���� ���� �ʴ�. \n");
	}

	return 0;
}