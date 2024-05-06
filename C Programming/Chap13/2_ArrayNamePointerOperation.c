// 1차원 배열이름의 포인터 형과 배열이름을 대상으로 하는 * 연산

#include <stdio.h>

int main(void) {
	int arr1[3] = { 1, 2 ,3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);
	return 0;
}