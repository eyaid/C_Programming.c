#include <stdio.h>
#include <string.h> //���ڿ� �Լ� ����� ���� ���
#include<math.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Function() {
	printf("�ȳ��ϼ���?");
}

int Mixer(int apple) {
	int juice = apple;
	return juice;
}

//���� �Լ�
/*
int sum(int x, int y) {
	return x+y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}
*/

void Swap(int& x, int& y) {
	//�����ͷ� ���� �� int *x, int *y�� ������ش�.
	int box;

	box = x;
	x = y;
	y = box;
	//�����ͷ� ���ٽ� ���� �տ� *�� �ٿ���� ������ ����.

	printf("�Լ� �ȿ��� ��ȯ�� x�� y�� �� : %d %d\n", x, y);
	printf("Swap �Լ����� x, y�� �ּҰ� % p, % p\n\n", &x, &y);

}

int a = 3;
void add();

void local_increase() {
	int value = 0;
	value++;
	printf("local increase�� ���� value : %d\n", value);
}

void increase() {
	static int a = 0; //���� ������ �ʱ� ���� ���� ������ �׻� 0���� �ʱ�ȭ��.
	a++;

	printf("increase�� ���� a : %d\n", a);
}

struct car { //����ü
	const char * name;
	int wheel = 4;
	int speed = 50;
};
//�� �� ������ �Ÿ�
/*
struct Player { 
	int x;
	int y;
};

struct Monster {
	int x;
	int y;
}; */

/*
struct key {
	char a;
	char b;
	char c;
};

struct data {
	char a;
	int b;
	char c;
};*/

void Function(int x) {
	printf("ȣ��\n");
	if (x == 0) {
		return;
	}
	Function(x-1);
}

//����Լ��� �̿��� ���丮��
/*
int num=1;
void	fac(int p) {
	num = num * p;
	if (p == 1) {
		printf("%d", num);
		return;
	}
		fac(p - 1);
}

int Factorial(int x) {
	if (x == 1)
		return 1;
	else
		return x * Factorial(x - 1);
}
*/

void main_c() {

	//���� ����
	/*char m = 'x';
	int a = 0;
	float PI_A = 3.14;

	const int b = 4; //const = ���� ������ �� ������ ����� ��

	//int b �� ���� �̸��� �ִ� ��� = �ɺ��� ���
	//5 �� ���� ���� �� ��ü. �̸�x = ���ͷ� ���

	a = 100;
	PI_A = 3.141592;
	m = 'H';
	int r = 1 + 10 * 2;

	printf("%f\n", PI_A);
	printf("%c\n", m);
	printf("%d\n", a);
	printf("��� b�� ���� %d �Դϴ�. \n", b);
	printf("���� r�� ���� %d �Դϴ�. \n", r);
	printf("%d", num);
	*/

	//���� �켱 ����
	/*int q = 10;
	int num = q / (20 -3 * 8);
	printf("%d", num);*/
	/*
	int number = 10 / 7;
	printf("%d", number);
	int apple = 10;
	const int banana = 20;

	printf("���� ����� %d �Դϴ�.", apple + banana);
	*/
	//��ȣ ������
	/*int a = 5; //0000 0101
	int b = 10; //0000 1010
	int c = 15; //0000 1111
	int d = 20; //0001 0100
	int e = 28; //0001 1100

	printf("AND �������� ���� %d\n", a & b);
	printf("AND �������� ���� %d\n", a & c);

	printf("OR �������� ���� %d\n", a | b);
	printf("OR �������� ���� %d\n", a | d);

	printf("XOR �������� ���� %d\n", a ^ b);
	printf("XOR �������� ���� %d\n", a ^ e);

	printf("NOT �������� ���� %d\n", ~a);
	printf("NOT �������� ���� % d\n", ~b);*/

	//�����÷ο�
	/*char over = 256;
	printf("���� over�� ���� %d\n", over);
	*/

	//����÷ο�
	/*char under = -130;
	printf("���� under�� ���� %d\n", under);
	char under_2 = -148;
	printf("���� under�� ���� %d\n", under_2);/*/

	//unsigned data type ��ȣ�� ���� �ڷ���
	/*	unsigned char num = 200;
	printf("unsigned �� %d\n", num);
	unsigned char num_2 = 256;
	printf("unsigned over %d\n", num_2);*/

	//if��
	/*
	int x = 3;
	int y = 4;

	if (x < y) {
		printf("%d�� %d���� �۴�.\n", x, y);
	}
	else if (x > y) {
		printf("%d�� %d���� ũ��.\n", x, y);
	}
	else {
		printf("%d�� %d�� ����.\n", x, y);
	}

	if (x<y || x>y) {
		printf("oo\n");
	}
	else if (x<y && x>y) {
		printf("xx\n");
	}*/

	//if�� ����
	/*
	int x = 1;
	int y = -3;

	if (x > 0 && y > 0) {
		printf("�� 1��и� �Դϴ�.\n");
	}
	else if (x > 0 && y < 0) {
		printf("�� 2��и� �Դϴ�.\n");
	}
	else if (x < 0 && y > 0) {
		printf("�� 3��и� �Դϴ�.\n");
	}
	else if (x < 0 && y < 0) {
		printf("�� 4��и� �Դϴ�.\n");
	}
	else if (y == 0 && (x>0||x<0)) {
		printf("x�����Դϴ�.\n");
	}
	else if (x == 0(y>0||y<0)) {
		printf("y�����Դϴ�.\n");
	}
	else {
		printf("�����̰ų� �� �� ���� ���� �ԷµǾ����ϴ�.\n");
	}*/

	//switch ��
	/*
	int A = 2;

	switch (A) {
	case 0 :
		printf("���� 0 �Դϴ�.\n");
		break;
	case 1 :
		printf("���� 1�Դϴ�.\n");
		break;
	case 2:
		printf("���� 2�Դϴ�.\n");
		break;
	default :
		printf("���� ? �Դϴ�.");
	}*/

	//scanf_s
	/*
	int  n1 = 0;
	scanf_s("%d", &n1);
	printf("%d", n1);*/

	//���� ������
	/*
	int x = 0;
	int y = 0;

	printf("���� ���� ������ : %d\n", x++);
	printf("���� �� ����� : %d\n", x);

	printf("���� ���� ������ : %d\n", ++y);
	printf("���� �� ����� : %d\n", y);

	int z = 0;
	int v = 0;

	printf("���� ���� ������ : %d\n", z--);
	printf("���� �� ����� : %d\n", z);

	printf("���� ���� ������ : % d\n", --v);
	printf("���� �� ����� : %d\n", v);
	*/

	//while
	/*
	int person = 3;

	while (person >= 3) {
		printf("���忡 �ο��� ��ġ���ּ���.");
		scanf_s("%d", &person);
	}
	*/

	//do-while��
	/*
	int x = 0;
	int y = 1;

	do {
		printf("������ �����մϴ�.\n");
	}
	while (x > y);
	*/

	//for��
	/*
	for (int i = 4; i >= 0; i--) {
		printf("%d\n", i);
	}*/

	//������
	/*
	for (int i = 1; i < 10; i++) {
		for (int k = 1; k < 10; k++) {
			printf("%d * %d = %d �Դϴ�.\n", i, k, i * k);
		}
	}*/

	//�� ������
	/*
	int x = 0;
	int y = 0;

	if (x == 0 && y == 0) {
		printf("������ AND �� �����մϴ�.\n");
	}
	if(y == 0 || y == 10) {
		printf("������ OR �̶� �����մϴ�.\n");
	}
	if (!x == 0) {
		printf("������ NOT �̶� �����մϴ�.\n");
	}*/

	//continue��
	/*
	for (int i = 1; i <= 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d\n", i);
	}*/
	/*
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			continue;
	}
	printf("%d\n", i);
	}*/

	//shift ������
	/*
	int memory = 3;
	printf("%d\n", memory << 3);

	int count = 10;
	printf("%d\n", count >> 2);
	count >>= 2;
	printf("%d\n", count);
	printf("%d\n", count << 2);
	*/

	//��Ȳ ������
	/*
	int apple = 10;
	int banana = 100;
	int result = 0;

	result = apple < banana ? apple : banana;

	printf("%d", result);
	*/

	//������
	/*
	int A = 10;
	int* ptr = &A;
	A = 20;
	*ptr = 1000;
	printf("%d\n", A);
	printf("%p\n", ptr);
	*/

	//��� ���� ������
	/*
		//��� ����(const)�� ����ϰ� �Ǹ� ���� ������ ���� ������ �����Ͱ� ����Ű�� �ּҰ��� ������ ���� �ִ�.
	int value = 10;
	int num = 20;

	const int* ptr = &value;
	ptr = &num; //�ּҰ� ����

	value = 1000; //ptr�� ����� ����Ǿ��� ������ value ��ü���� ����.
	printf("%d", *ptr); //��������� 1000�� ��µȴ�.
	*/

	//�Լ�
	/*
	Function();
	*/

	//�Ű� ����
	/*int result = Mixer(3);

	printf("%d", result);*/

	//���� �Լ� �����
	/*
	printf("%d\n%d\n%d\n%d", sum(2, 3), sub(2, 3), mul(2, 3), div(2, 3));
	//5, -1, 6, 0
	*/

	//call by value
	/*
	int x = 10;
	int y = 20;

	printf("main �Լ����� x,y�� �ּҰ� : %p %p\n", &x, &y);
	//printf("��ȯ �� x�� y�� �� : %d %d\n", x, y); //10, 20
	Swap(10, 20);
	//printf("��ȯ �� x�� y�� �� : %d %d\n", x, y); //10, 20

	//�Լ� ������ x�� y�� ���� ��ȯ�Ͽ����� ���� �������� ������ ���� �ʴ´�.
	//x�� y�� ����ǰ�� ��ȯ�� ��.
	*/

	//call by Reference(������ ���� ȣ��)
	/*
	int x = 10;
	int y = 20;

	printf("��ȯ �� x�� y�� �� : %d %d\n\n", x, y); //10, 20
	Swap(x, y);

	//Ȥ�� �����ͷ� �ޱ� ���� Swap(&x, &y)�� ���.
	//�����ʹ� ������ �����Ѿ� �ϱ� ������ &�� �ٿ� �ּҸ� �Ѱ���.

	printf("��ȯ �� x�� y�� �� : %d %d\n", x, y); //20, 10
	printf("main �Լ����� x,y�� �ּҰ� %p, %p\n", &x, &y);

	//������ ���� ���� ���������� ������ ��ĥ �� ������ �Ű������� const(���)�� �ְ� �ȴٸ�
	//�Լ� �������� ���� ������ �� ����.
	*/
	/*
	int a = 60;
	int b = 48;
	int gcd = 1;

	for (int i = 1; i <= a && i <= b; i++) {
		if(a%i == 0 && b%i == 0){
			gcd = i;
		}
	}
	printf("�ִ� ����� %d\n", gcd);
	*/

	//�迭
	/*
	int array[] = { 2,3,5,8 };

	printf("�迭�� ũ�� : %d\n", sizeof(array));
	//�迭�� ũ�⸦ �˾ƺ��� ���� sizeof

	for (int i = 0; i < 4; i++) {
		printf("�迭�� %d ��° ������ �� : %d\n", i, array[i]);
	}
	*/
	/*int point[4] = { 80, 50, 60, 60 };
	int mean = 0;

	for (int i = 0; i < 4; i++) {
		mean = mean + point[i];
	}
	mean = mean / 4;
	printf("���� ����� %d �̴�", mean);
	*/

	//������ �迭
	/*
	int a = 10;
	int b = 20;
	int c = 30;

	printf("a : %p\n", &a);
	printf("b : %p\n", &b);
	printf("c : %p\n", &c);

	int *array[3] = { &a, &b, &c };

	//������ �ּҰ��� �޾ƿԱ� ������ &�� �����ϰ� ����ϰ� �Ǹ� array�� �ּҰ��� �ƴ� a�� �ּҰ��� ���´�.
	printf("�������� ù��° �ּ� : %p\n", &array[0]);
	printf("�������� �ι�° �ּ� : %p\n", &array[1]);
	printf("�������� ����° �ּ� : %p\n", &array[2]);
	printf("�������� �׹�° �ּ� : %p\n", &array[3]);
	//�����int array�� �����Ͱ� 4����Ʈ�� ������ �ֱ� ������ �ּҸ� ����غ��� 4�� ����� �ִ�.
	//double�� �� 8����Ʈ�� ������.
	*/

	//���ڿ�
	/*
	const char* ptr = "Hello";

	printf("%s\n", ptr); //���ڿ��� ����� s�̴�.

	char text[10] = { 'B', 'a', 'n', 'a', 'n', 'a' };
	printf("text�� �޸� ���� : %d\n", sizeof(text));
	printf("%c\n", text[6]);//�����Ȱ��� �ƹ��͵� ��� NULL ���ڰ� ��.
	printf("%s\n", text);
	*/

	//2���� �迭
	/*
	int array[2][3] = { {0,1,3},{2,4,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	*/

	//�ּҰ� �ִ밪 ���ϱ�
	/*
	int array[5] = { 1, 6, 7, 8, 4 };
	int max = 0;
	int min = 10000;

	for (int i = 0; i < 5; i++) {
		if (array[i] > max) max = array[i];
		if (array[i] < min) min = array[i];
	}
		printf("�ִ밪 %d / �ּҰ� %d", max, min);
	*/

	//ASCII CODE
	/*
	char value = 'a';

	printf("%d", value);
	*/

	//���ڿ� ���� �Լ�
	/*
	//���ڿ� ���� �Լ��� ���� ������ ��� �ʿ�.
	char Hobby[] = "Game";
	printf("%d\n", strlen(Hobby));//4
	//���ڿ� ���� �Լ��� NULL���� ������ ���ڿ� ������ ����Ѵ�.

	char pood[] = "Ri\0ce";//\0�� NULL���ڴ�.
	printf("%d\n", strlen(pood));//2
	//\0�� NULL�����̱� ������ Ri ������ �ν��ϰ� ��.

	char Hey[] = "H e l l o";
	printf("%d\n", strlen(Hey));//9
	//������ �����ؼ� ���ڿ��� ���̸� ������.
	*/

	//���ڿ� ���� �Լ�
	/*
	char first[15] = "kang ";
	char second[] = "eunyoung";

	strcat_s(first, second);
	//strcat(�����Լ�, �����Լ�);
	//(�޴� �Լ� + �����Լ��� ũ�� < ���� �Լ��� ����) �̾�� �Ѵ�.
	//�ȵȴٸ� sizeof(first)�� ���� ������� �Է�.

	printf("%s", first);
	*/

	//���ڿ� �� �Լ�
	/*
	char first[] = "aab"; // 97 97 98 = 292
	char second[] = "aaa"; //97 97 97 = 291

	printf("%d", strcmp(first, second));//1
	//= 0/ > 1 / < -1 ��ȯ
	*/

	//���ڿ� ���� �Լ�
	/*
	char Color[10];
	char Black[] = "black";

	strcpy_s(Color, Black);
	printf("%s", Color);
	//Color�� Black���� �� ���ڿ��� �־ Black�� ���ڿ��� Color�� ���� �ȴ�.
	//Color ��ü�� ��ó���� �� �ٿ��ֱ⸦ �ϴ� ��.
	*/

	//���� ����
	/*
	int a = 3;
	�Լ��� �ܺο��� ����� �����̸�, ���α׷��� ����Ǿ�߸� ������ �޸𸮿��� �������.
	*/

	//��������
	/*
	int a = 5;
	{
		int a = 3;
		printf("%d\n", a);  //�Լ� ���ο��� ����� �����̸�, �Լ��� ����Ǹ� ���� ���� �޸𸮿��� �������.
	}
	printf("%d", a);

	add();
	printf("%d", a);
	*/

	//Static Variable(���� ����)
	//����� �Լ� �������� ����� �� ������, ���α׷��� ����� ������ �޸� ������ ������.
	//���⼭ main �Լ� �ۿ� ����� ���� ������ ���� �����Ϸ� �ص� ����� �Լ� �ٱ��̱� ������ ���� �Ұ�.
	/*
increase();
increase();
increase();

local_increase();
local_increase();
local_increase();
	*/

	//Register Variable(�������� ����)
	//CPU ������ �ӽ� ��� ��� �������Ϳ� ������ �Ҵ�, ���� ������.
	//���������θ� ���.
	/*
	register int a = 3;
	printf("%d, a);*/

	//Struct(����ü)
	//�ϳ� �̻��� ������ ���� ���ο� �ڷ��� ����
	/*
	struct ����ü �̸�{
		�ڷ��� ����;
		�ڷ��� ����;
	}*/

	//��� ������
	//����ü�� �̿�, ����� ������ �� ����Ѵ�.
	/*
	struct car small_car;
	small_car.name = "Sonata";
	small_car.wheel = 4;
	small_car.speed = 100;

	printf("%s\n", small_car.name);
	printf("%d\n", small_car.wheel);
	printf("%d\n", small_car.speed);
	*/

	//pow( ����) / sqrt(��Ʈ)
	/*
	int a = pow(10, 2); //pow(����) 10�� 2��
	float f = sqrt(10);
	printf("%d\n", a);
	printf("%f\n", f);
	*/

	//�� �� ������ �Ÿ�
	/*
	struct Player p_location = { 6,1 };
	struct Monster m_location = { 3,5 };

	int x_location = pow((p_location.x - m_location.x),2);
	int y_location = pow((p_location.y - m_location.y),2);

	printf("%d\n", x_location);
	printf("%d\n", y_location);

	printf("���Ϳ� �÷��̾� ������ �Ÿ��� %.0f�̴�.\n", sqrt(x_location + y_location)); //5 ��� �Ϸ�. */

	//����Ʈ �е�
	//��� ������ �޸𸮿��� �ѹ��� ���� �� �ֵ��� ����Ʈ�� �е�, ����ȭ ����.
	/*
	printf("%d", sizeof(struct key));
	printf("%d", sizeof(struct data));
	*/

	//��� �Լ�
	//Function(5);
	/*
	fac(5);	
	Factorial(5);*/


	//PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	
	//�Ϲ��� �� ��ȯ
/*
char value = 10; //1byte
	short memory = 20; //2byte

	printf("%d\n", value + memory);
	printf("%d\n", sizeof(value + memory)); //int ������ ��ȯ�Ǿ� 4byte�� �ȴ�.

	int  a = 19.8865;
	printf("%d", a); //�Ҽ��� �κ��� ���ư� ������ �ս�.

	double x = 17.21 + 10.0;
	printf("%f", x);*/

	//����� �� ��ȯ
	/*
	
int x = 2;
int y = 5;

float result = (float)y/x; //int�� int�� ����ؼ� int ���. 2.5 ��� 2.0�� ��µȴ�.
//�Ϲ��� ����ȯ �� �ڱ⺸�� ū �ڷ������� ��ȯ.
//float�� int�� ���� 4byte���� float�� ���� �� ũ��.
//char(1) < short(2) < int(4) < long(4) < long long(8) < float(4) < double(8) < long double(12)
printf("%f", result); //float�� ���� ��ȯ ��  2.5�� ��µȴ�.
*/

	//�ε��Ҽ���
/*
float sum = 0;
for (int i = 1; i <= 100; i++) {
	sum += 0.1;
}
printf("%f", sum); //10.000002
*/

//���� �Ҵ�
/*
int* value;

value = (int*)malloc(sizeof(int));
*value = 10;
printf("%d\n",value);

free(value);

int* ptr;

ptr - (int*)malloc(sizeof(int) * 5); //20byte�� �޸� ������ �Ҵ�.

if (ptr == NULL) {
	printf("���� �޸� �Ҵ� ����");
	return;
}

ptr[0] = 10;
ptr[1] = 30;
ptr[2] = 50;
ptr[3] = 70;
ptr[4] = 90;

for (int i = 0; i<5; i++) {
	printf("%d\n", ptr[i]); 
}

free(ptr);
*/

//���� ����
/*
int num = 65;
char* value = NULL; //�޸� �ʱ�ȭ
value = (char*)malloc(30 * sizeof(char)); //�޸� 30 �Ҵ�

for (int i = 0; i < 27; i++) {
	value[i] = num;
	num += 1;
	//Ȥ�� value[i] = 'A' + i ;
}

for (int i = 0; i < 26; i++) {
	printf("%c\n", value[i]);
}
free(value);//�޸𸮰� �ڵ������� �������� �ʱ� ������ ���� ��������� ��.
*/

//�޸� �ʱ�ȭ �Լ�
/*
int array[5] = { 10, 51, 678, 98, 88 };

for (int Element : array) { //int ��� auto(�ڵ�����)�� ���� �� �ִ�.
	printf("�޸� �ʱ�ȭ �� : %d\n", Element);
}
//
//for(int i = 0; i< 5; i++){
//	printf("%d\n", array[i]);
//	} 
//	�� ����.
//	

memset(array, 0, sizeof(array)); //�޸� �ʱ�ȭ. (�ʱ�ȭ�� ����, �ʱ�ȭ �� ��, ������)
for (int Element : array) { //int ��� auto(�ڵ�����)�� ���� �� �ִ�.
	printf("�޸� �ʱ�ȭ �� : %d\n", Element); 
}
*/
/*
char value[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };

for (auto Element : value) {
	printf("�޸� �ʱ�ȭ �� : %c\n", Element);
}
memset(value, 'X', sizeof(char)*2);
for (auto Element : value) {
	printf("�޸� �ʱ�ȭ �� : %c\n", Element);  
}
*/

//�޸� ī�� �Լ�
/*
int array[3] = { 1,3,4 };
int origin[3];

memcpy(origin, array, sizeof(array));

for (int i = 0; i < 3; i++) {
	printf("%d\n", origin[i]);
}

const char* str = "Unity";
char origin_str[] = "UnrealEngineFive";

memcpy(origin_str, str, sizeof(char)*5); //+1�� �ϰų� *6�� �ϰԵǸ� NULL���ڸ� ����. Unity�� ��µȴ�.

printf("%s\n", origin_str);
*/

//�޸� �̵� �Լ�
/*
int array[3] = { 1,2,3 };
int origin[3];

memmove(origin, array, sizeof(array));

for (int i = 0; i < 3; i++) {
	printf("%d\n", origin[i]);
}
*/
}