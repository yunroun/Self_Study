// TwoToNine.c를 do~while문의 중첩기반으로 재구현해보자.

#include <stdio.h>

int main(void) {
	int cur = 2;
	int is = 0;

	do {
		is = 1;
		do {
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);
	return 0;
}