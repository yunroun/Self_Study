#include <stdio.h>

int main(void) {
	int leftX, leftY;
	int rightX, rightY;
	int result;

	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &leftX, &leftY);
	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &rightX, &rightY);
	result = (rightX - leftX) * (rightY - leftY);

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", result);
	return 0;
}