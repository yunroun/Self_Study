// scanf �Լ��� �̿��� ���ڿ��� �Է�

#include <stdio.h>

int main(void) {
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}