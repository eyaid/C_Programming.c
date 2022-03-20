#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//random 함수를 위한 헤더.
#include <time.h>
#include <windows.h>

void Move(int x, int y) {
	//x,y 좌표 설정
	COORD position = { x, y };
	
	//커서를 이동하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

int main() {

	int value = 0;

	srand(time(NULL));

	//중복이 되는 난수
	/*
	for (int i = 0; i < 10; i++) {
		value = rand() % 10+1; //rand. 0~32767의 수를 반환.
		printf("%d\n", value);
	}*/
	//중복되지 않는 난수
	/*
	int num[11] = {0,};
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 10 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}*/

	//파일 쓰기
	/*
	FILE * 변수명(뭐가 되든 상관없다.) = fopen("파일 이름", "w(읽기)/r(쓰기)");
	FILE* file = fopen("file.txt", "w");

	fputs("file\n", file);
	fputs("Hello\n", file);

	fclose(file);
	*/
	//파일 읽기
	/*
	char buffer[10000] = { 0, }; //파일을 읽을 때 사용할 임시 공간.

	FILE* file = fopen("Data.txt", "r");

	//buffer = char  배열
	//10000 = 읽어들일 원소의 크기로 단위는 바이트이며, size가 4이면 원소의 크기는 4 바이트이다.
	//1 = 크기를 가지는 배열을 가리키는 포인터
	//file = 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터

	fread(buffer, sizeof(buffer), 1, file); //data.txt에서 버퍼크기(100)만큼 1번 값을 읽는다.

	printf("%s", buffer);
	*/

	int x = 5;
	int y = 5;
	

	//동기화 : 다음 작업으로 넘어가기 위해 현재 하고 있는 작업을 다 끝내야 다음 작업으로 넘어갈 수 있는 것.
	//비동기화(VK_~~) : 다음 작업으로 넘어가기 위해 현재 하고 있는 작업을 진행하면서도 실행이 가능함.
	Move(5, 5);
	printf("☆");

	while (1) {
		
		if (GetAsyncKeyState(VK_UP)) {
			y--; //x는 오른쪽으로, y는 밑으로 갈수록 값이 커진다.
			system("cls"); 
			Move(x, y);
			printf("☆");
		}
		if (GetAsyncKeyState(VK_DOWN)) {
			y++;
			system("cls");
			Move(x, y);
			printf("☆");
		}
		if (GetAsyncKeyState(VK_LEFT)) {
			x = x - 2;
			system("cls"); 
			Move(x, y);
			printf("☆");
		}
		if (GetAsyncKeyState(VK_RIGHT)) {
			x = x + 2;
			system("cls"); 
			Move(x, y);
			printf("☆");
		}
		
	}

	

	return 0;
	
	 
}