#include <stdio.h>

int main(void) {
	int num;

	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("%d \n", ~num + 1);
	return 0;
}