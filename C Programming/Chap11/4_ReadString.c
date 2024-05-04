// scanf 함수를 이용한 문자열의 입력

#include <stdio.h>

int main(void) {
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}