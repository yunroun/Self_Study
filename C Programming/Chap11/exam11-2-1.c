// 하나의 영단어를 입력 받아 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램 작성
// "Array"라는 단어가 입력되면 5가 출력되어야 한다.

#include <stdio.h>

int main(void) {
	char voca[100];
	int len = 0;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != 0) {		// while(voca[len] != '\0') 와 동일
		len++;
	}

	printf("입력한 영단어의 길이는 %d \n", len);
	return 0;
}