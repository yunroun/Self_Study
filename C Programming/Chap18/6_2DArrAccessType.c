// 2차원 배열에서의 arr[i] == *(arr + i) 성립

#include <stdio.h>

int main(void) {
	int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	
	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a + 0));

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));

	printf("%d, %d \n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d \n", a[2][1], *(a[2] + 1));
	printf("%d, %d \n", a[2][1], *(*(a + 2) + 1));
}