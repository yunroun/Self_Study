// ������ ���̰� 9, ������ ��Ʊ� 3�� int�� 2���� �迭�� �����Ͽ� ������ �� 2��, 3��, 4���� ��������.

#include <stdio.h>

int main(void) {
	int arr[3][9];
	int i, j;

	// ������ ����
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	// ������ ���
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}