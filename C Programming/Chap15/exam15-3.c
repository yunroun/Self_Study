// ���̰� 10�� �迭�� �����ϰ� �� 10���� ���� �Է�
// ��, �Է� ���� ���ڰ� Ȧ���� �迭�� �տ������� ä��������, ¦���� �ڿ������� ä��������.
// [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�� �Է��ߴٸ�, [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]�� ������ ����

#include <stdio.h>

int main(void) {
	int arr[10];
	int front = 0, back = 9;
	int num, i;

	printf("�� 10���� ���� �Է� \n");
	for (i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &num);
		if (num % 2 == 1) {
			arr[front++] = num;
		}
		else {
			arr[back--] = num;
		}
	}

	printf("�迭 ����� ���: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}