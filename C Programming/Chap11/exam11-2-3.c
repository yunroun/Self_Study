// ���ܾ �Է� �ް�, ���ܾ �����ϴ� ���� �߿��� �ƽ�Ű �ڵ� ���� ���� ū ���ڸ� ã�� ���
// ���� ���, "LOVE"�� �Է��ߴٸ� �ƽ�Ű �ڵ� ���� ���� ū "V"�� ��µǾ�� �Ѵ�.

#include <stdio.h>

int main(void) {
	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("���ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// ���ܾ��� ���� ���
		len++;
	}

	for (i = 0; i < len; i++) {
		if (max < voca[i]) {
			max = voca[i];
		}
	}

	printf("���� ū �ƽ�Ű �ڵ� ���� ����: %c \n", max);
	return 0;
}