// 5���� ������ �Է� �޾Ƽ�, �� ���� ���� ����ϴ� ���α׷��� �ۼ�
// ������ �ݵ�� 1 �̻��̾�� �Ѵ�. 1 �̸��� ���� �ԷµǴ� ��� �Է����� �������� �ʰ� ���Է��� �䱸�Ѵ�.
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0, sum = 0;

	while (loop < 5) {
		printf("%d��° ������ �Է��ϼ���: ", loop + 1);
		scanf_s("%d", &num);
		sum += num;
		loop += 1;

		while (num < 1) {
			printf("1 �̻��� ������ �Է����ּ���. \n");
			sum -= num;
			loop -= 1;
			num = 1;
		}
	}

	printf("5���� ������ ���� %d�Դϴ�. \n", sum);
}