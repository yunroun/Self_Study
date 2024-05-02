// 3,500원으로 크림빵(500원), 새우깡(700원), 콜라(400원)을 사려 한다.
// 잔돈을 하나도 남기지 않고 세가지 물건을 하나 이상 반드시 구매할 때, 경우의 수들을 모두 출력하라

#include <stdio.h>

const int BREAD = 500;
const int SNACK = 700;
const int DRINK = 400;

int main(void) {
	int i, j, k;
	int money;
	printf("현재 당신이 소유하고 있는 금액: ");
	scanf_s("%d", &money);

	for (i = 1; i < money / BREAD; i++) {
		for (j = 1; j < money / SNACK; j++) {
			for (k = 1; k < money / DRINK; k++) {
				if (money == BREAD * i + SNACK * j + DRINK * k) {
					printf("크림빵 %d개, ", i);
					printf("새우깡 %d개, ", j);
					printf("콜 라 %d개 \n", k);
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}