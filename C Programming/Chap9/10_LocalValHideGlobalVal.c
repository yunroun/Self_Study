// 전역변수와 동일한 이름의 지역변수 선언 예제

#include <stdio.h>
int Add(int val);
int num = 1;

int main(void) {
	int num = 5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num + 9);
	return 0;
}

int Add(int val) {
	int num = 9;
	num += val;
	return num;
}