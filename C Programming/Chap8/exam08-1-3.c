// 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램 작성
// 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D, 그 미만이면 F
// 국어, 영어, 수학의 점수를 입력 받고, 평균을 구한 후 학점을 출력하면 된다.

#include <stdio.h>

int main(void) {
	int kor, eng, math;
	int avg;

	printf("국어, 영어, 수학 점수를 입력하세요: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90) {
		printf("학점은 A입니다.");
	}
	else if (avg >= 80) {
		printf("학점은 B입니다.");
	}
	else if (avg >= 70) {
		printf("학점은 C입니다.");
	}
	else if (avg >= 50) {
		printf("학점은 D입니다.");
	}
	else {
		printf("학점은 F입니다.");
	}

	return 0;
}