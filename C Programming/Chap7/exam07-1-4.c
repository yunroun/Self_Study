// �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� ����ϱ�
#include <stdio.h>

int main(void) {
	int num = 9, dan = 0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &dan);

	while (num > 0) {
		printf("%d x %d = %d \n", dan, num, dan * num);
		num--;
	}
	return 0;
}