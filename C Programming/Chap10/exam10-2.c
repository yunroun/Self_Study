// �� ���� ������ �Է� �޾� �������� ����ϴ� ���α׷� �ۼ�
// ex) 3�� 5�� �Է��ϸ� 3, 4, 5�� ���
// ��, �� ���ڸ� �Է� �� �� �Է� ������ �����ο��� �Ѵ�. (3, 5 or 5, 3 �� �� 3, 4, 5�� ���)

#include <stdio.h>

void NineNine(int num1, int num2);

int main(void) {
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2) {
		NineNine(num1, num2);
	}
	else {
		NineNine(num2, num1);
	}
	return 0;
}

// num1�ܺ��� num2�ܱ��� ���
void NineNine(int num1, int num2) {
	int i;

	while (num1 <= num2) {
		for (i = 1; i < 10; i++) {
			printf("%d x %d = %d \n", num1, i, num1 * i);
		}
		printf("\n");
		num1++;
	}
}