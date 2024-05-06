// ȸ��(Palindrome)�� ������ ������ �ڷ� ������ ���̰� ���� �ܾ���� ���Ѵ�. (level, bob)
// ���ڷ� ���޵Ǵ� ���ܾ ȸ������ �ƴ����� �Ǵ��� �� ����� ����ϴ� ����� �Լ��� �����ϰ� ������ main �Լ� ����
// ��, ��ҹ��ڱ��� ��ġ�ؾ� ȸ������ ����

#include <stdio.h>

void IsPalindrome(char* str);
int StringLen(char* str);

int main(void) {
	char string[30];

	printf("���ڿ� �Է�: ");
	scanf("%s", &string);
	IsPalindrome(string);
	return 0;
}

void IsPalindrome(char* str) {
	int len = StringLen(str);
	int i;

	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			printf("ȸ���� �ƴմϴ�. \n");
			return;
		}
	}
	printf("ȸ���Դϴ�. \n");
}

int StringLen(char* str) {
	int len = 0;

	while (str[len] != 0) {
		len++;
	}

	return len;
}