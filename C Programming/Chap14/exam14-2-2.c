// �Ʒ� �ڵ忡�� ������ ���� ������ �������� ã�ƺ���. ShowData �Լ��� ������ �����غ���.

#include <stdio.h>

void ShowData(const int* arr) {
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main(void) {
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

// �Ű����� ptr�� const ������ �߰��Ǿ� �����Ƿ�, ptr�� ����Ű�� ������ ����� ���� �����ϸ� �� �ȴ�.
// ������ ptr�� ����� ���� const�� ������� ���� ������ ������ �����ϰ� �ְ�, �׷����� rptr�� ���ؼ� ptr�� ����Ű�� ������ ���� ������ �� �ִ� ��Ȳ�� �Ǿ���.