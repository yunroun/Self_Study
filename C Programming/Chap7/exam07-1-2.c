// ���� ���� �ϳ� �Է� �ް�, �� ����ŭ 3�� ����� ����ϴ� ���α׷� �ۼ�
// ���� ���, 5�� �Է� �޾Ҵٸ� 3 6 9 12 15�� ���
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0;

	printf("���� ���� �� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	while (loop < num) {
		printf("%d ", 3 * (loop + 1));
		loop++;
	}
	return 0;
}