// ���ܾ �Է� �޾Ƽ� char�� �迭�� �����Ѵ�. �� �� �迭�� ����� ���ܾ �������� �����´�.
// �� ������ ��ġ�� �����ϸ� �� �ȴ�.

#include <stdio.h>

int main(void) {
	char voca[100];
	int len = 0, i;
	char temp;

	printf("���ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// ���ܾ��� ���� ���
		len++;
	}

	for (i = 0; i < len / 2; i++) {		// ���ܾ� ������
		temp = voca[i];		// ���� ���� �ӽ÷� ����
		voca[i] = voca[(len - i) - 1];		// ���� ���ڸ� ������
		voca[(len - i) - 1] = temp;		// ���� ���ڸ� �ڷ�
	}

	printf("������ ���ܾ�: %s \n", voca);
	return 0;
}