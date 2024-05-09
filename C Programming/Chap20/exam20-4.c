// 두 개의 주사위를 던졌을 때의 결과를 출력하는 프로그램을 작성하라. 결과는 예측이 불가능해야 한다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDie(void);

int main(void) {
	int roll1, roll2;

	srand((int)time(NULL));

	roll1 = RollDie();
	roll2 = RollDie();

	printf("주사위 결과: %d, %d \n", roll1, roll2);
	return 0;
}

int RollDie() {
	return rand() % 6 + 1;
}