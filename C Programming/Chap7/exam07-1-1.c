// ���� ������ �ϳ� �Է� �ް�, �� ����ŭ "Hello world!"�� ���
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0;

	printf("���� ���� �� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	while (loop < num) {
		printf("Hello world! \n");
		loop++;
	}
	return 0;
}