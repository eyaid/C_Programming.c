#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//random �Լ��� ���� ���.
#include <time.h>
#include <windows.h>

void Move(int x, int y) {
	//x,y ��ǥ ����
	COORD position = { x, y };
	
	//Ŀ���� �̵��ϴ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

int main() {

	int value = 0;

	srand(time(NULL));

	//�ߺ��� �Ǵ� ����
	/*
	for (int i = 0; i < 10; i++) {
		value = rand() % 10+1; //rand. 0~32767�� ���� ��ȯ.
		printf("%d\n", value);
	}*/
	//�ߺ����� �ʴ� ����
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

	//���� ����
	/*
	FILE * ������(���� �ǵ� �������.) = fopen("���� �̸�", "w(�б�)/r(����)");
	FILE* file = fopen("file.txt", "w");

	fputs("file\n", file);
	fputs("Hello\n", file);

	fclose(file);
	*/
	//���� �б�
	/*
	char buffer[10000] = { 0, }; //������ ���� �� ����� �ӽ� ����.

	FILE* file = fopen("Data.txt", "r");

	//buffer = char  �迭
	//10000 = �о���� ������ ũ��� ������ ����Ʈ�̸�, size�� 4�̸� ������ ũ��� 4 ����Ʈ�̴�.
	//1 = ũ�⸦ ������ �迭�� ����Ű�� ������
	//file = �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������

	fread(buffer, sizeof(buffer), 1, file); //data.txt���� ����ũ��(100)��ŭ 1�� ���� �д´�.

	printf("%s", buffer);
	*/

	int x = 5;
	int y = 5;
	

	//����ȭ : ���� �۾����� �Ѿ�� ���� ���� �ϰ� �ִ� �۾��� �� ������ ���� �۾����� �Ѿ �� �ִ� ��.
	//�񵿱�ȭ(VK_~~) : ���� �۾����� �Ѿ�� ���� ���� �ϰ� �ִ� �۾��� �����ϸ鼭�� ������ ������.
	Move(5, 5);
	printf("��");

	while (1) {
		
		if (GetAsyncKeyState(VK_UP)) {
			y--; //x�� ����������, y�� ������ ������ ���� Ŀ����.
			system("cls"); 
			Move(x, y);
			printf("��");
		}
		if (GetAsyncKeyState(VK_DOWN)) {
			y++;
			system("cls");
			Move(x, y);
			printf("��");
		}
		if (GetAsyncKeyState(VK_LEFT)) {
			x = x - 2;
			system("cls"); 
			Move(x, y);
			printf("��");
		}
		if (GetAsyncKeyState(VK_RIGHT)) {
			x = x + 2;
			system("cls"); 
			Move(x, y);
			printf("��");
		}
		
	}

	

	return 0;
	
	 
}