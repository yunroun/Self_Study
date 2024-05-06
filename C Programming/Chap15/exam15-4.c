// 회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다. (level, bob)
// 인자로 전달되는 영단어가 회문인지 아닌지를 판단해 그 결과를 출력하는 기능의 함수를 정의하고 적절한 main 함수 정의
// 단, 대소문자까지 일치해야 회문으로 인정

#include <stdio.h>

void IsPalindrome(char* str);
int StringLen(char* str);

int main(void) {
	char string[30];

	printf("문자열 입력: ");
	scanf("%s", &string);
	IsPalindrome(string);
	return 0;
}

void IsPalindrome(char* str) {
	int len = StringLen(str);
	int i;

	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			printf("회문이 아닙니다. \n");
			return;
		}
	}
	printf("회문입니다. \n");
}

int StringLen(char* str) {
	int len = 0;

	while (str[len] != 0) {
		len++;
	}

	return len;
}