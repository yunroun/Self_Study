// ����ڰ� �Է��ϴ� ���� �����Ͽ� �� �հ踦 ����ϴ� ���α׷�
// AddToTotal������ ����� �������� �������� total�� �����Ͽ��µ�, �̸� static ������ ��ü�ض�
// main �Լ��� ������ ����� �ϰ�, �������� �����ؾ� �Ѵ�.

#include <stdio.h>

int AddToTotal(int num) {
	static int total = 0;
	total += num;
	return total;
}

int main(void) {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("�Է�%d: ", i + 1);
		scanf_s("%d", &num);
		printf("����: %d \n", AddToTotal(num));
	}
	return 0;
}