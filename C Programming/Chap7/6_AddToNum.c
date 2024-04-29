// for문을 사용해 0이상, 프로그램 사용자가 입력한 정수 이하의 값을 모두 더해서 출력

#include <stdio.h>

int main(void) {
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++) {
		total += i;
	}

	printf("0부터 %d까지 덧셈결과: %d \n", num, total);
	return 0;
}