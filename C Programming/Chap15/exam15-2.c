// 10���� ���·� ������ �ϳ� �Է� �ް�, �̸� 2������ ��ȯ�ؼ� ���

#include <stdio.h>

int main(void) {
	int num, cnt = 0;
	char binArr[30];

	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	while (num > 0) {		// 2������ ��ȯ
		binArr[cnt++] = num % 2;
		num /= 2;
	}

	while (cnt > 0) {		// 2���� ��ȯ ��� ���
		printf("%d", binArr[--cnt]);
	}

	printf("\n\n");
	return 0;
}