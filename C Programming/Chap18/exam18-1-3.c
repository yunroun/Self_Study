// ???을 대신할 수 있는 매개변수 선언을 추가하라.

#include <stdio.h>

// void ComplexFuncOne(???, ???) {...}
// void ComplexFuncTwo(???, ???) {...}

int main(void) {
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	// ComplexFuncOne(arr1, arr2);
	// ComplexFuncTwo(arr3, arr4);
}

// void ComplexFuncOne(int** ptr1, int* (*ptr2)[5]) {...}
// void ComplexFuncTwo(int*** ptr3, int*** (*ptr4)[5]) {...}