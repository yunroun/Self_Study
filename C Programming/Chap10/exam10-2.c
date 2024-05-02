// 두 개의 정수를 입력 받아 구구단을 출력하는 프로그램 작성
// ex) 3과 5를 입력하면 3, 4, 5단 출력
// 단, 두 숫자를 입력 할 때 입력 순서는 자유로워야 한다. (3, 5 or 5, 3 둘 다 3, 4, 5단 출력)

#include <stdio.h>

void NineNine(int num1, int num2);

int main(void) {
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2) {
		NineNine(num1, num2);
	}
	else {
		NineNine(num2, num1);
	}
	return 0;
}

// num1단부터 num2단까지 출력
void NineNine(int num1, int num2) {
	int i;

	while (num1 <= num2) {
		for (i = 1; i < 10; i++) {
			printf("%d x %d = %d \n", num1, i, num1 * i);
		}
		printf("\n");
		num1++;
	}
}