// �߱� ����(���� ���߱� ����)�� ��ǻ�Ϳ� �� �� �ֵ��� ���α׷��� �ۼ��غ���.
// ��ǻ�ʹ� 0���� 9������ ���� �߿��� ���� �ٸ� �� ���� ���ڸ� ����, ����ڴ� ����� �Ѵ�. �߿��� ���� ������ �������� ��Ȯ�ϰ� ����� �Ѵ�.
// ��, ����ڰ� ������ ���ڸ� �Է��� ������ ��ǻ�ʹ� �Էµ� ���ڿ� ��ǻ�� �ڽ��� ������ ���ڰ� �󸶳� ��������� �˷���� �Ѵ�.
// ��, �������� �� �� ���� 3 strike�� ���´����� ���ؼ��� ����� �ֱ�� ����.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ComSel(int* arr);		// ��ǻ�Ͱ� 3���� ���ڸ� ����
int IsValid(int* arr);		// ����� �Է� ��ȿ�� �˻�. ��ȿ�ϸ� 1 ����
void UsrSel(int* arr);		// ����� 3���� ���ڸ� �Է�
int Compare(int* arr1, int* arr2);		// ���� ��� ��

int main(void) {
	int comArr[3];		// ��ǻ�Ϳ� ���� ����
	int usrArr[3];		// ����ڿ� ���� ����
	int result = 0;

	printf("Start Game! \n");
	ComSel(comArr);

	while (result != 1) {
		UsrSel(usrArr);
		result = Compare(comArr, usrArr);
		printf("\n");
	}

	printf("Game End! \n");
	return 0;
}

void ComSel(int* arr) {		// ��ǻ�Ͱ� 3���� ���ڸ� ����
	srand((int)time(NULL));

	// selection 1
	arr[0] = rand() % 10;

	// selection 2
	do {
		arr[1] = rand() % 10;
	} while (arr[0] == arr[1]);

	// selection 3
	do {
		arr[2] = rand() & 10;
	} while ((arr[0] == arr[2]) || (arr[1] == arr[2]));
}

int IsValid(int* arr) {
	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2]) {
		return 0;
	}
	else {
		return 1;
	}
}

void UsrSel(int* arr) {
	int valid;

	printf("3���� ���� ����: ");
	while (1) {
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		valid = IsValid(arr);
		if (valid == 1) {
			break;
		}
		else {
			printf("�߸��� �Է�, �� �Է�: ");
		}
	}
}

int Compare(int* arr1, int* arr2) {
	static int count = 0;
	int strike = 0, ball = 0;
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (arr1[i] == arr2[j]) {
				i == j ? strike++ : ball++;
				break;
			}
		}
	}

	count++;
	printf("%d��° ���� ���: %dstrike, %dball!!\n", count, strike, ball);

	if (strike == 3) {
		return 1;
	}
	else {
		return 0;
	}
}