// ���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� ����
// ���� ���, 5�� �Է��ϸ� 0���� �����ؼ� �� 5���� �Ǻ���ġ ������ ���
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// �Ǻ���ġ ������ �� ��° ������ �������ʹ� ������ �� ���� ������ �����ȴ�.

#include <stdio.h>

void ShowFiboSeries(int num) {
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1) {
		printf("%d ", f1);
	}
	else {
		printf("%d %d ", f1, f2);
	}

	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int n;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ����: ");
	scanf_s("%d", &n);
	if (n < 1) {
		printf("1�̻��� ���� �Է��ϼ���. \n");
		return -1;
	}
	ShowFiboSeries(n);
	return 0;
}