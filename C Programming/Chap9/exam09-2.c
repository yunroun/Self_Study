// 사용자가 입력하는 값을 누적하여 그 합계를 출력하는 프로그램
// AddToTotal에서의 사용을 목적으로 전역변수 total을 선언하였는데, 이를 static 변수로 대체해라
// main 함수의 변경은 없어야 하고, 실행결과도 동일해야 한다.

#include <stdio.h>

int AddToTotal(int num) {
	static int total = 0;
	total += num;
	return total;
}

int main(void) {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("입력%d: ", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}
	return 0;
}