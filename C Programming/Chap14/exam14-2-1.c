// 아래에 정의된 함수는 인자로 전달되는 정보를 참조하여 int형 배열요소 전체를 출력하는 함수이다.

#include <stdio.h>

void ShowAllData(const int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

// 매개변수 arr을 대상으로 const 선언을 한 이유는?

// 인자로 전달된 배열의 전체요소를 출력해야 하기 때문에, 배열요소의 값이 바뀌면 안 된다.
// 따라서, 매개변수 arr이 배열이기 때문에 const 선언을 함으로써 요소 값을 바꿀 수 없게 만들었다.