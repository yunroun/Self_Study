// ���̰� 5�� int�� �迭�� �����ؼ� ����ڷκ��� �� 5���� ���� �Է� �ް�, ������ ������ ���
// �Էµ� ���� �߿��� �ִ�
// �Էµ� ���� �߿��� �ּڰ�
// �Էµ� ������ �� ��
// ��, �ݵ�� �Է��� �Ϸ��� ���¿��� '�ִ�'�� '�ּڰ�'�� ����ؾ� �Ѵ�.

#include <stdio.h>

int main(void) {
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++) {
		sum += arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("�ִ�: %d \n", max);
	printf("�ּڰ�: %d \n", min);
	printf("�� ��: %d \n", sum);
	return 0;
}