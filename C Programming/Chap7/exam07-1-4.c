// 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하기
#include <stdio.h>

int main(void) {
	int num = 9, dan = 0;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &dan);

	while (num > 0) {
		printf("%d x %d = %d \n", dan, num, dan * num);
		num--;
	}
	return 0;
}