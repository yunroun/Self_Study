// char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화 후, 이후에는 저장된 내용을 출력
// "Good time"

#include <stdio.h>

int main(void) {
	char str[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int arrLen = sizeof(str) / sizeof(char);
	int i;

	for (i = 0; i < arrLen; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}A