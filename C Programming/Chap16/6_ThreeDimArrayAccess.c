// 3���� �迭�� ����� ����

#include <stdio.h>

int main(void) {
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{70, 80},		// A �б� �л� 1�� ����
			{94, 90},		// A �б� �л� 2�� ����
			{70, 85}		// A �б� �л� 3�� ����	
		},
		{
			{83, 90},		// B �б� �л� 1�� ����
			{95, 60},		// B �б� �л� 2�� ����
			{90, 82}		// B �б� �л� 3�� ����
		},
		{
			{98, 89},		// C �б� �л� 1�� ����
			{99, 94},		// C �б� �л� 2�� ����
			{91, 87}		// C �б� �л� 3�� ����
		}
	};

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			mean += record[0][i][j];
		}
	}
	printf("A �б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			mean += record[1][i][j];
		}
	}
	printf("B �б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			mean += record[2][i][j];
		}
	}
	printf("C �б� ��ü ���: %g \n", (double)mean / 6);

	return 0;
}