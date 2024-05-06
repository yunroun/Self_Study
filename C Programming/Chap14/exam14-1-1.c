// ���� num�� ����� ���� ������ ����ϴ� �Լ��� ����, �̸� ȣ���ϴ� main �Լ��� �ۼ�
// ��, ���� �� ���� ���·� �Լ� ����
// 1. Call-by-value ����� SquareByValue �Լ�: ���ڷ� ���޵� ���� ������ ��ȯ
// 2. Call-by-reference ����� SquareByReference �Լ�: ������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ� �ش� ������ ����� ���� ������ �� ������ �ٽ� ����

#include <stdio.h>

int SquareByValue(int num) {
	return num * num;
}

void SquareByReference(int* ptr) {
	int num = *ptr;
	*ptr = num * num;
}

int main(void) {
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}