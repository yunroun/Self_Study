// UsefulDoWhile.c�� while�� ������� �籸���� ���, ���¸� 2������ ���� �� �ִ�.
// ��� 1: ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.

#include <stdio.h>

int main(void) {
	int total = 0, num = 1;

	while (num != 0) {
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} 
	printf("�հ�: %d \n", total);
	return 0;
}