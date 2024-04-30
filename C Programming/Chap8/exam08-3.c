// if~else if~else문을 switch문으로 변경해라

#include <stdio.h>

int main(void) {
	int n;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);

	switch (n) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("0이상 10미만");
		break;
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
		printf("10이상 20미만");
		break;
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:	
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
	}
	return 0;
}