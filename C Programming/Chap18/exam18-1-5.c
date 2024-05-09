// 이 예제에서 인덱스 [1][0][1]의 배열요소를 출력하고 있다.
// 이 때 사용된 arr[1][0][1]을 대신할 수 있는 문장을 5개 이상 제시해보자.

#include <stdio.h>

int main(void) {
	int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	printf("%d \n", arr[1][0][1]);
	return 0;
}

// printf("%d \n", (*(arr + 1))[0][1]);
// printf("%d \n", (*(*(arr + 1) + 0))[1]);
// printf("%d \n", *(*(*(arr + 1) + 0) + 1));
// printf("%d \n", (*(arr[1] + 0))[1]);
// printf("%d \n", *(*(arr[1] + 0) + 1));
// printf("%d \n", *(arr[1][0] + 1));