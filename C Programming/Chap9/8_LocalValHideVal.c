// 외부에 선언된 동일한 이름의 변수를 가리는 지역변수 예제

#include <stdio.h>

int main(void) {
	int num = 1;

	if (num == 1) {
		int num = 7;		// 이 행을 주석처리 하고 실행결과를 확인하자!
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
} 