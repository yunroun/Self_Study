// 가위바위보 게임을 만들어보자. 가위바위보 중 하나를 입력 받고, 컴퓨터는 난수를 통해서 하나를 선택한다.
// 이 둘을 비교해 승자와 패자를 가려주는 프로그램을 작성해보자.
// 단, 사용자가 질 때까지 계속되어야 하고, 마지막에는 게임의 결과를 출력해야 한다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int M = 1;		// 바위(묵)
const int G = 2;		// 가위(찌)
const int B = 3;		// 보(빠)

void Randomize(void);
int GetComSel(void);
int GetUsrSel(void);
int WhoWin(int a, int b);

int main(void) {
	int com, usr;
	int result;
	int win = 0, same = 0;

	Randomize();

	while (1) {
		usr = GetUsrSel();
		com = GetComSel();
		
		result = WhoWin(com, usr);
		if (result == 1) {
			printf("당신이 이겼습니다. \n");
			win++;
		}
		else if (result == -1) {
			printf("당신이 졌습니다. \n");
			break;
		}
		else {
			printf("비겼습니다. \n");
			same++;
		}
	}

	printf("게임의 결과: %d승, %d무 \n", win, same);
	return 0;
}

void Randomize(void) {
	srand((int)time(NULL));
}

int GetComSel(void) {
	int sel = rand() % 3 + 1;
	if (sel == 1) {
		printf("컴퓨터는 바위 선택, ");
	}
	else if (sel == 2) {
		printf("컴퓨터는 가위 선택, ");
	}
	else {
		printf("컴퓨터는 보 선택, ");
	}

	return sel;
}

int GetUsrSel(void) {
	int sel;
	printf("바위는 1, 가위는 2, 보는 3: ");
	scanf("%d", &sel);

	if (sel == 1) {
		printf("당신은 바위 선택, ");
	}
	else if (sel == 2) {
		printf("당신은 가위 선택, ");
	}
	else {
		printf("당신은 보 선택, ");
	}

	return sel;
}

int WhoWin(int s1, int s2) {
	if (s1 == s2) {
		return 0;
	}
	else if (s1 % 3 == (s2 + 1) % 3) {		// s2 승
		return 1;
	}
	else {		// s1 승
		return -1;
	}
}