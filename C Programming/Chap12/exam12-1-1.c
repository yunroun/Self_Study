// 아래 예제 실행 시 벼ㅕㄴ수와 포인터 변수의 관계를 설명하라. 출력의 결과도 예상해보자.

#include <stdio.h>

int main(void) {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}

// ptr1과 ptr2가 동시에 변수 num을 가리킨다.
// 두 포인터 변수 모두 변수 num을 가리키므로, 출력의 결과는 12가 된다.