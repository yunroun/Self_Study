// for���� ����� 0�̻�, ���α׷� ����ڰ� �Է��� ���� ������ ���� ��� ���ؼ� ���

#include <stdio.h>

int main(void) {
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++) {
		total += i;
	}

	printf("0���� %d���� �������: %d \n", num, total);
	return 0;
}