// 양의 정수를 하나 입력 받고, 그 수만큼 "Hello world!"를 출력
#include <stdio.h>

int main(void) {
	int num = 0, loop = 0;

	printf("양의 정수 한 개를 입력하세요: ");
	scanf_s("%d", &num);

	while (loop < num) {
		printf("Hello world! \n");
		loop++;
	}
	return 0;
}