// 0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�,
// do~while�� ������� ����. ������ ����� 2550�� �Ǿ�� �Ѵ�.

#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	do {
		total += num;
		num = num + 2;
	} while (num <= 100);

	printf("Total: %d \n", total);
	return 0;
}