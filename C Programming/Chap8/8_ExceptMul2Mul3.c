// continue문 사용 예제 - 1이상 20미만 정수 출력, 2와 3의 배수 출력 제외

#include <stdio.h>

int main(void) {
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) {
			continue;
		}
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}