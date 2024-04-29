// 입력 받은 정수의 평균을 출력하는 프로그램 작성
// 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻기, 그 수만큼 정수 입력 받기
// 평균 값은 소수점 이하까지 계산해서 출력
#include <stdio.h>

int main(void) {
	int input = 0, num = 0, loop = 0;
	float avg = 0;

	printf("몇 개의 정수를 입력하겠습니까? ");
	scanf_s("%d", &input);

	while (loop < input) {
		printf("정수를 입력하세요: ");
		scanf_s("%d", &num);

		avg += num;
		loop++;
	}
	avg = avg / input;
	printf("평균 값은 %f입니다. \n", avg);
}