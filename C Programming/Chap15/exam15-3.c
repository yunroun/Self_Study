// 길이가 10인 배열을 선언하고 총 10개의 정수 입력
// 단, 입력 받은 숫자가 홀수면 배열의 앞에서부터 채워나가고, 짝수면 뒤에서부터 채워나가자.
// [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면, [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]의 순으로 저장

#include <stdio.h>

int main(void) {
	int arr[10];
	int front = 0, back = 9;
	int num, i;

	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &num);
		if (num % 2 == 1) {
			arr[front++] = num;
		}
		else {
			arr[back--] = num;
		}
	}

	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}