// while문으로 입력 받은 정수의 구구단 출력
#include <stdio.h>

int main(void) {
	int dan = 0, num = 1;
	printf("몇 단? ");
	scanf_s("%d", &dan);

	while (num < 10) {
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}