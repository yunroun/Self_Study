// 양의 정수 하나 입력 받고, 그 수만큼 3의 배수를 출력하는 프로그램 작성
// 예를 들어, 5를 입력 받았다면 3 6 9 12 15를 출력
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0;

	printf("양의 정수 한 개를 입력하세요: ");
	scanf_s("%d", &num);

	while (loop < num) {
		printf("%d ", 3 * (loop + 1));
		loop++;
	}
	return 0;
}