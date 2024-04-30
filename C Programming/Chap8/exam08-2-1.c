// 구구단을 출력하되 짝수 단(2, 4, 6, 8)만 출력
// 또, 2단은 2 x 2까지, 4단은 4 x 4까지 이런 식으로 출격

#include <stdio.h>

int main(void) {
	int dan, num;

	for (dan = 2; dan < 10; dan++) {
		for (num = 1; num < 10; num++) {
			if (dan % 2 == 0 && num % 2 == 0) {
				printf("%dx%d=%d \n", dan, num, dan * num);
				if (dan == num) {
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}