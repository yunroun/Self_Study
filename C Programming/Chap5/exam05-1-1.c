#include <stdio.h>

int main(void) {
	int leftX, leftY;
	int rightX, rightY;
	int result;

	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &leftX, &leftY);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf_s("%d %d", &rightX, &rightY);
	result = (rightX - leftX) * (rightY - leftY);

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", result);
	return 0;
}