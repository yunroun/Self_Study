// 난수의 씨드(seed) 값

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int seed, i;
	printf("씨드 값 입력: ");
	scanf("%d", &seed);
	srand(seed);		// 씨앗을 심는다.

	for (i = 0; i < 5; i++) {
		printf("정수 출력: %d \n", rand());		// 열매를 수확한다.
	}
	return 0;
}