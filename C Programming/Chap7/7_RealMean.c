// 사용자가 입력하는 실수의 평균값 출력
// 실수 입력은 0보다 작은 음의 실수 값이 입력될 때까지 계속되며, 마무리하기 위해서 마지막으로 입력된 음의 실수는 평균값 계산에서 제외

#include <stdio.h>

int main(void) {
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; ) {
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total / (num - 1));
	return 0;
}