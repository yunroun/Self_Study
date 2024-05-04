// 영단어를 입력 받고, 영단어를 구성하는 문자 중에서 아스키 코드 값이 가장 큰 문자를 찾아 출력
// 예를 들어, "LOVE"를 입력했다면 아스키 코드 값이 가장 큰 "V"가 출력되어야 한다.

#include <stdio.h>

int main(void) {
	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// 영단어의 길이 계산
		len++;
	}

	for (i = 0; i < len; i++) {
		if (max < voca[i]) {
			max = voca[i];
		}
	}

	printf("가장 큰 아스키 코드 값의 문자: %c \n", max);
	return 0;
}