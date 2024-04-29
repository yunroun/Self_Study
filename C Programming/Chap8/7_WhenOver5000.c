// break문 사용 예제 - 1+2+3+...+n의 결과가 최초로 5000을 넘길 때의 n을 구하는 예제

#include <stdio.h>

int main(void) {
	int sum = 0, num = 0;

	while (1) {
		sum += num;
		if (sum > 5000) {
			break;		// break문 실행! 따라서 반복문 탈출
		}
		num++;
 	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}