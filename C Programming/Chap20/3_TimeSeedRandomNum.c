// time.h�� time �Լ� Ȱ���Ͽ� ���� ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	srand((int)time(NULL));		// ����ð��� �̿��ؼ� ���� ����
	for (i = 0; i < 5; i++) {
		printf("���� ���: %d \n", rand());
	}
	return 0;
}