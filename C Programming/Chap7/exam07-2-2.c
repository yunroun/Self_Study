// 아래 출력을 보여주는 프로그램 작성
// *
// o*
// oo*
// ooo*
// oooo*

#include <stdio.h>

int main(void) {
	int loop = 0, circle = 0;

	while (loop < 5) {
		while (circle < loop) {
			printf("o");
			circle++;

			loop += 1;
			printf("* \n");
			circle = 0;
		}
	}
}