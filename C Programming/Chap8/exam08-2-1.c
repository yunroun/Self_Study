// �������� ����ϵ� ¦�� ��(2, 4, 6, 8)�� ���
// ��, 2���� 2 x 2����, 4���� 4 x 4���� �̷� ������ ���

#include <stdio.h>

int main(void) {
	int dan, num;

	for (dan = 2; dan < 10; dan++) {
		for (num = 1; num < 10; num++) {
			if (dan % 2 == 0 && num % 2 == 0) {
				printf("%dx%d=%d \n", dan, num, dan * num);
				if (dan == num) {
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}