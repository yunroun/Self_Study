// 1_RandomNum.c를 참고하여 0 이상 99 이하의 난수를 총 5개 생성하는 프로그램을 작성해보자.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("난수 출력: %d \n", rand() % 100);
	}

	return 0;
}