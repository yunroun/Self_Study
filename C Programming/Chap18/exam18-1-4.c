// ���� ������ ��� �����?

#include <stdio.h>

int main(void) {
	int arr[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	printf("%d %d \n", arr[1][0], arr[0][1]);
	printf("%d %d \n", *(arr[2] + 1), *(arr[1] + 1));
	printf("%d %d \n", (*(arr + 2))[0], (*(arr + 0))[1]);
	printf("%d %d \n", **arr, *(*(arr + 0) + 0));
	return 0;
}

// 3 2
// 6 4
// 5 2
// 1 1