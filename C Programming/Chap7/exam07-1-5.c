// �Է� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
// �� ���� ������ �Է��� ������ ���α׷� ����ڿ��� ����, �� ����ŭ ���� �Է� �ޱ�
// ��� ���� �Ҽ��� ���ϱ��� ����ؼ� ���
#include <stdio.h>

int main(void) {
	int input = 0, num = 0, loop = 0;
	float avg = 0;

	printf("�� ���� ������ �Է��ϰڽ��ϱ�? ");
	scanf_s("%d", &input);

	while (loop < input) {
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &num);

		avg += num;
		loop++;
	}
	avg = avg / input;
	printf("��� ���� %f�Դϴ�. \n", avg);
}