// %f, %e ���Ĺ��� ���, e ǥ���
#include <stdio.h>

int main(void) {
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);		// e ǥ��� ����� ���
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);	// e ǥ��� ����� ���
	return 0;
}