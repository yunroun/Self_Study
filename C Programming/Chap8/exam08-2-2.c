// 다음 식을 만족하는 모든 A와 Z를 구해라
// AZ + ZA = 99

#include <stdio.h>

int main(void) {
	int a, z;
	int result;

	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (a == z) {
				continue;
			}
			result = (a * 10 + z) + (z * 10 + a);
			if (result == 99) {
				printf("%d%d + %d%d = %d \n", a, z, z, a, result);
			}
		}
	}
	return 0;
}