// 아래 코드에서 지적할 만한 사항이 무엇인지 찾아보자. ShowData 함수를 유심히 관찰해보자.

#include <stdio.h>

void ShowData(const int* arr) {
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main(void) {
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

// 매개변수 ptr에 const 선언이 추가되어 있으므로, ptr이 가리키는 변수에 저장된 값을 변경하면 안 된다.
// 하지만 ptr에 저장된 값을 const로 선언되지 않은 포인터 변수에 대입하고 있고, 그로인해 rptr을 통해서 ptr이 가리키는 변수의 값을 변경할 수 있는 상황이 되었다.