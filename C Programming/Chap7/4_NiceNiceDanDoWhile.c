// do~while������ �Է� ���� ������ ������ ���
#include <stdio.h>

int main(void) {
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf_s("%d", &dan);

	do {
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	} while (num < 10);
	return 0;
}