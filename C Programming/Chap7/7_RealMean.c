// ����ڰ� �Է��ϴ� �Ǽ��� ��հ� ���
// �Ǽ� �Է��� 0���� ���� ���� �Ǽ� ���� �Էµ� ������ ��ӵǸ�, �������ϱ� ���ؼ� ���������� �Էµ� ���� �Ǽ��� ��հ� ��꿡�� ����

#include <stdio.h>

int main(void) {
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; ) {
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("���: %f \n", total / (num - 1));
	return 0;
}