#include <stdio.h>
#include <string.h> //문자열 함수 사용을 위한 헤더
#include<math.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Function() {
	printf("안녕하세요?");
}

int Mixer(int apple) {
	int juice = apple;
	return juice;
}

//계산기 함수
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
	//포인터로 받을 시 int *x, int *y로 사용해준다.
	int box;

	box = x;
	x = y;
	y = box;
	//포인터로 접근시 변수 앞에 *를 붙여줘야 접근이 가능.

	printf("함수 안에서 교환한 x와 y의 값 : %d %d\n", x, y);
	printf("Swap 함수에서 x, y의 주소값 % p, % p\n\n", &x, &y);

}

int a = 3;
void add();

void local_increase() {
	int value = 0;
	value++;
	printf("local increase의 변수 value : %d\n", value);
}

void increase() {
	static int a = 0; //정적 변수는 초기 값을 주지 않으면 항상 0으로 초기화됨.
	a++;

	printf("increase의 변수 a : %d\n", a);
}

struct car { //구조체
	const char * name;
	int wheel = 4;
	int speed = 50;
};
//두 점 사이의 거리
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
	printf("호출\n");
	if (x == 0) {
		return;
	}
	Function(x-1);
}

//재귀함수를 이용한 팩토리얼
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

	//변수 선언
	/*char m = 'x';
	int a = 0;
	float PI_A = 3.14;

	const int b = 4; //const = 값을 변경할 수 없도록 만들어 줌

	//int b 와 같은 이름이 있는 상수 = 심볼릭 상수
	//5 와 같이 숫자 그 자체. 이름x = 리터럴 상수

	a = 100;
	PI_A = 3.141592;
	m = 'H';
	int r = 1 + 10 * 2;

	printf("%f\n", PI_A);
	printf("%c\n", m);
	printf("%d\n", a);
	printf("상수 b의 값은 %d 입니다. \n", b);
	printf("변수 r의 값은 %d 입니다. \n", r);
	printf("%d", num);
	*/

	//연산 우선 순위
	/*int q = 10;
	int num = q / (20 -3 * 8);
	printf("%d", num);*/
	/*
	int number = 10 / 7;
	printf("%d", number);
	int apple = 10;
	const int banana = 20;

	printf("계산된 결과는 %d 입니다.", apple + banana);
	*/
	//부호 연산자
	/*int a = 5; //0000 0101
	int b = 10; //0000 1010
	int c = 15; //0000 1111
	int d = 20; //0001 0100
	int e = 28; //0001 1100

	printf("AND 연산자의 값은 %d\n", a & b);
	printf("AND 연산자의 값은 %d\n", a & c);

	printf("OR 연산자의 값은 %d\n", a | b);
	printf("OR 연산자의 값은 %d\n", a | d);

	printf("XOR 연산자의 값은 %d\n", a ^ b);
	printf("XOR 연산자의 값은 %d\n", a ^ e);

	printf("NOT 연산자의 값은 %d\n", ~a);
	printf("NOT 연산자의 값은 % d\n", ~b);*/

	//오버플로우
	/*char over = 256;
	printf("변수 over의 값은 %d\n", over);
	*/

	//언더플로우
	/*char under = -130;
	printf("변수 under의 값은 %d\n", under);
	char under_2 = -148;
	printf("변수 under의 값은 %d\n", under_2);/*/

	//unsigned data type 부호가 없는 자료형
	/*	unsigned char num = 200;
	printf("unsigned 값 %d\n", num);
	unsigned char num_2 = 256;
	printf("unsigned over %d\n", num_2);*/

	//if문
	/*
	int x = 3;
	int y = 4;

	if (x < y) {
		printf("%d는 %d보다 작다.\n", x, y);
	}
	else if (x > y) {
		printf("%d는 %d보다 크다.\n", x, y);
	}
	else {
		printf("%d는 %d와 같다.\n", x, y);
	}

	if (x<y || x>y) {
		printf("oo\n");
	}
	else if (x<y && x>y) {
		printf("xx\n");
	}*/

	//if문 퀴즈
	/*
	int x = 1;
	int y = -3;

	if (x > 0 && y > 0) {
		printf("제 1사분면 입니다.\n");
	}
	else if (x > 0 && y < 0) {
		printf("제 2사분면 입니다.\n");
	}
	else if (x < 0 && y > 0) {
		printf("제 3사분면 입니다.\n");
	}
	else if (x < 0 && y < 0) {
		printf("제 4사분면 입니다.\n");
	}
	else if (y == 0 && (x>0||x<0)) {
		printf("x절편입니다.\n");
	}
	else if (x == 0(y>0||y<0)) {
		printf("y절편입니다.\n");
	}
	else {
		printf("원점이거나 알 수 없는 값이 입력되었습니다.\n");
	}*/

	//switch 문
	/*
	int A = 2;

	switch (A) {
	case 0 :
		printf("숫자 0 입니다.\n");
		break;
	case 1 :
		printf("숫자 1입니다.\n");
		break;
	case 2:
		printf("숫자 2입니다.\n");
		break;
	default :
		printf("숫자 ? 입니다.");
	}*/

	//scanf_s
	/*
	int  n1 = 0;
	scanf_s("%d", &n1);
	printf("%d", n1);*/

	//증감 연산자
	/*
	int x = 0;
	int y = 0;

	printf("후위 증가 연산자 : %d\n", x++);
	printf("연산 후 결과값 : %d\n", x);

	printf("전위 증가 연산자 : %d\n", ++y);
	printf("연산 후 결과값 : %d\n", y);

	int z = 0;
	int v = 0;

	printf("후위 감소 연산자 : %d\n", z--);
	printf("연산 수 결과값 : %d\n", z);

	printf("전위 감소 연산자 : % d\n", --v);
	printf("연산 수 결과값 : %d\n", v);
	*/

	//while
	/*
	int person = 3;

	while (person >= 3) {
		printf("공장에 인원을 배치해주세요.");
		scanf_s("%d", &person);
	}
	*/

	//do-while문
	/*
	int x = 0;
	int y = 1;

	do {
		printf("게임을 시작합니다.\n");
	}
	while (x > y);
	*/

	//for문
	/*
	for (int i = 4; i >= 0; i--) {
		printf("%d\n", i);
	}*/

	//구구단
	/*
	for (int i = 1; i < 10; i++) {
		for (int k = 1; k < 10; k++) {
			printf("%d * %d = %d 입니다.\n", i, k, i * k);
		}
	}*/

	//논리 연산자
	/*
	int x = 0;
	int y = 0;

	if (x == 0 && y == 0) {
		printf("조건이 AND 라서 실행합니다.\n");
	}
	if(y == 0 || y == 10) {
		printf("조건이 OR 이라서 동작합니다.\n");
	}
	if (!x == 0) {
		printf("조건이 NOT 이라서 동작합니다.\n");
	}*/

	//continue문
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

	//shift 연산자
	/*
	int memory = 3;
	printf("%d\n", memory << 3);

	int count = 10;
	printf("%d\n", count >> 2);
	count >>= 2;
	printf("%d\n", count);
	printf("%d\n", count << 2);
	*/

	//삼황 연산자
	/*
	int apple = 10;
	int banana = 100;
	int result = 0;

	result = apple < banana ? apple : banana;

	printf("%d", result);
	*/

	//포인터
	/*
	int A = 10;
	int* ptr = &A;
	A = 20;
	*ptr = 1000;
	printf("%d\n", A);
	printf("%p\n", ptr);
	*/

	//상수 지시 포인터
	/*
		//상수 선언(const)를 사용하게 되면 값을 변경할 수는 없지만 포인터가 가르키는 주소값을 변경할 수는 있다.
	int value = 10;
	int num = 20;

	const int* ptr = &value;
	ptr = &num; //주소값 변경

	value = 1000; //ptr이 상수로 선언되었기 때문에 value 자체값을 변경.
	printf("%d", *ptr); //결과적으로 1000이 출력된다.
	*/

	//함수
	/*
	Function();
	*/

	//매개 변수
	/*int result = Mixer(3);

	printf("%d", result);*/

	//계산기 함수 만들기
	/*
	printf("%d\n%d\n%d\n%d", sum(2, 3), sub(2, 3), mul(2, 3), div(2, 3));
	//5, -1, 6, 0
	*/

	//call by value
	/*
	int x = 10;
	int y = 20;

	printf("main 함수에서 x,y의 주소값 : %p %p\n", &x, &y);
	//printf("교환 전 x와 y의 값 : %d %d\n", x, y); //10, 20
	Swap(10, 20);
	//printf("교환 후 x와 y의 값 : %d %d\n", x, y); //10, 20

	//함수 내에서 x와 y의 값을 교환하였지만 기존 변수값에 영향을 주진 않는다.
	//x와 y의 복제품이 교환된 셈.
	*/

	//call by Reference(참조에 의한 호출)
	/*
	int x = 10;
	int y = 20;

	printf("교환 전 x와 y의 값 : %d %d\n\n", x, y); //10, 20
	Swap(x, y);

	//혹은 포인터로 받기 위해 Swap(&x, &y)를 사용.
	//포인터는 변수를 가리켜야 하기 때문에 &를 붙여 주소를 넘겨줌.

	printf("교환 후 x와 y의 값 : %d %d\n", x, y); //20, 10
	printf("main 함수에서 x,y의 주소값 %p, %p\n", &x, &y);

	//다음과 같이 실제 변수값에도 영향을 끼칠 수 있지만 매개변수를 const(상수)로 주게 된다면
	//함수 내에서도 값을 변경할 순 없다.
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
	printf("최대 공약수 %d\n", gcd);
	*/

	//배열
	/*
	int array[] = { 2,3,5,8 };

	printf("배열의 크기 : %d\n", sizeof(array));
	//배열의 크기를 알아보기 위한 sizeof

	for (int i = 0; i < 4; i++) {
		printf("배열의 %d 번째 원소의 값 : %d\n", i, array[i]);
	}
	*/
	/*int point[4] = { 80, 50, 60, 60 };
	int mean = 0;

	for (int i = 0; i < 4; i++) {
		mean = mean + point[i];
	}
	mean = mean / 4;
	printf("과목 평균은 %d 이다", mean);
	*/

	//포인터 배열
	/*
	int a = 10;
	int b = 20;
	int c = 30;

	printf("a : %p\n", &a);
	printf("b : %p\n", &b);
	printf("c : %p\n", &c);

	int *array[3] = { &a, &b, &c };

	//변수의 주소값을 받아왔기 때문에 &를 제거하고 출력하게 되면 array의 주소값이 아닌 a의 주소값이 나온다.
	printf("포인터의 첫번째 주소 : %p\n", &array[0]);
	printf("포인터의 두번째 주소 : %p\n", &array[1]);
	printf("포인터의 세번째 주소 : %p\n", &array[2]);
	printf("포인터의 네번째 주소 : %p\n", &array[3]);
	//현재는int array로 포인터가 4바이트를 가지고 있기 때문에 주소를 출력해보면 4씩 띄워져 있다.
	//double일 시 8바이트가 배정됨.
	*/

	//문자열
	/*
	const char* ptr = "Hello";

	printf("%s\n", ptr); //문자열의 출력은 s이다.

	char text[10] = { 'B', 'a', 'n', 'a', 'n', 'a' };
	printf("text의 메모리 공간 : %d\n", sizeof(text));
	printf("%c\n", text[6]);//배정된것이 아무것도 없어서 NULL 문자가 들어감.
	printf("%s\n", text);
	*/

	//2차원 배열
	/*
	int array[2][3] = { {0,1,3},{2,4,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	*/

	//최소값 최대값 구하기
	/*
	int array[5] = { 1, 6, 7, 8, 4 };
	int max = 0;
	int min = 10000;

	for (int i = 0; i < 5; i++) {
		if (array[i] > max) max = array[i];
		if (array[i] < min) min = array[i];
	}
		printf("최대값 %d / 최소값 %d", max, min);
	*/

	//ASCII CODE
	/*
	char value = 'a';

	printf("%d", value);
	*/

	//문자열 길이 함수
	/*
	//문자열 길이 함수를 위한 별도의 헤더 필요.
	char Hobby[] = "Game";
	printf("%d\n", strlen(Hobby));//4
	//문자열 길이 함수는 NULL문자 이전의 문자열 까지면 출력한다.

	char pood[] = "Ri\0ce";//\0는 NULL문자다.
	printf("%d\n", strlen(pood));//2
	//\0가 NULL문자이기 때문에 Ri 까지만 인식하게 됨.

	char Hey[] = "H e l l o";
	printf("%d\n", strlen(Hey));//9
	//공백을 포함해서 문자열의 길이를 설정함.
	*/

	//문자열 연결 함수
	/*
	char first[15] = "kang ";
	char second[] = "eunyoung";

	strcat_s(first, second);
	//strcat(받을함수, 연결함수);
	//(받는 함수 + 연결함수의 크기 < 받을 함수의 공간) 이어야 한다.
	//안된다면 sizeof(first)와 같은 방식으로 입력.

	printf("%s", first);
	*/

	//문자열 비교 함수
	/*
	char first[] = "aab"; // 97 97 98 = 292
	char second[] = "aaa"; //97 97 97 = 291

	printf("%d", strcmp(first, second));//1
	//= 0/ > 1 / < -1 반환
	*/

	//문자열 복사 함수
	/*
	char Color[10];
	char Black[] = "black";

	strcpy_s(Color, Black);
	printf("%s", Color);
	//Color에 Black보다 긴 문자열이 있어도 Black의 문자열만 Color에 남게 된다.
	//Color 전체에 블럭처리한 후 붙여넣기를 하는 셈.
	*/

	//전역 변수
	/*
	int a = 3;
	함수의 외부에서 선언된 변수이며, 프로그램이 종료되어야만 변수도 메모리에서 사라진다.
	*/

	//지역변수
	/*
	int a = 5;
	{
		int a = 3;
		printf("%d\n", a);  //함수 내부에서 선언된 변수이며, 함수가 종료되면 변수 또한 메모리에서 사라진다.
	}
	printf("%d", a);

	add();
	printf("%d", a);
	*/

	//Static Variable(정적 변수)
	//선언된 함수 내에서만 사용할 수 있으며, 프로그램이 종료될 때까지 메모리 공간에 존재함.
	//여기서 main 함수 밖에 선언된 정적 변수의 값을 변경하려 해도 선언된 함수 바깥이기 때문에 변경 불가.
	/*
increase();
increase();
increase();

local_increase();
local_increase();
local_increase();
	*/

	//Register Variable(레지스터 변수)
	//CPU 내부의 임시 기억 장소 레지스터에 변수를 할당, 값을 저장함.
	//지역변수로만 사용.
	/*
	register int a = 3;
	printf("%d, a);*/

	//Struct(구조체)
	//하나 이상의 변수를 묶어 새로운 자료형 정의
	/*
	struct 구조체 이름{
		자료형 변수;
		자료형 변수;
	}*/

	//멤버 연산자
	//구조체를 이용, 멤버에 접근할 때 사용한다.
	/*
	struct car small_car;
	small_car.name = "Sonata";
	small_car.wheel = 4;
	small_car.speed = 100;

	printf("%s\n", small_car.name);
	printf("%d\n", small_car.wheel);
	printf("%d\n", small_car.speed);
	*/

	//pow( 제곱) / sqrt(루트)
	/*
	int a = pow(10, 2); //pow(제곱) 10의 2승
	float f = sqrt(10);
	printf("%d\n", a);
	printf("%f\n", f);
	*/

	//두 점 사이의 거리
	/*
	struct Player p_location = { 6,1 };
	struct Monster m_location = { 3,5 };

	int x_location = pow((p_location.x - m_location.x),2);
	int y_location = pow((p_location.y - m_location.y),2);

	printf("%d\n", x_location);
	printf("%d\n", y_location);

	printf("몬스터와 플레이어 사이의 거리는 %.0f이다.\n", sqrt(x_location + y_location)); //5 출력 완료. */

	//바이트 패딩
	//멤버 변수를 메모리에서 한번에 읽을 수 있도록 바이트를 패딩, 최적화 해줌.
	/*
	printf("%d", sizeof(struct key));
	printf("%d", sizeof(struct data));
	*/

	//재귀 함수
	//Function(5);
	/*
	fac(5);	
	Factorial(5);*/


	//PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	
	//암묵적 형 변환
/*
char value = 10; //1byte
	short memory = 20; //2byte

	printf("%d\n", value + memory);
	printf("%d\n", sizeof(value + memory)); //int 형으로 변환되어 4byte가 된다.

	int  a = 19.8865;
	printf("%d", a); //소수점 부분이 날아가 데이터 손실.

	double x = 17.21 + 10.0;
	printf("%f", x);*/

	//명시적 형 변환
	/*
	
int x = 2;
int y = 5;

float result = (float)y/x; //int와 int를 계산해서 int 출력. 2.5 대신 2.0이 출력된다.
//암묵적 형변환 시 자기보다 큰 자료형으로 변환.
//float와 int는 같은 4byte지만 float가 조금 더 크다.
//char(1) < short(2) < int(4) < long(4) < long long(8) < float(4) < double(8) < long double(12)
printf("%f", result); //float로 강제 변환 후  2.5로 출력된다.
*/

	//부동소수점
/*
float sum = 0;
for (int i = 1; i <= 100; i++) {
	sum += 0.1;
}
printf("%f", sum); //10.000002
*/

//동적 할당
/*
int* value;

value = (int*)malloc(sizeof(int));
*value = 10;
printf("%d\n",value);

free(value);

int* ptr;

ptr - (int*)malloc(sizeof(int) * 5); //20byte의 메모리 공간을 할당.

if (ptr == NULL) {
	printf("동적 메모리 할당 실패");
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

//동적 문제
/*
int num = 65;
char* value = NULL; //메모리 초기화
value = (char*)malloc(30 * sizeof(char)); //메모리 30 할당

for (int i = 0; i < 27; i++) {
	value[i] = num;
	num += 1;
	//혹은 value[i] = 'A' + i ;
}

for (int i = 0; i < 26; i++) {
	printf("%c\n", value[i]);
}
free(value);//메모리가 자동적으로 해제되지 않기 때문에 직접 해제해줘야 함.
*/

//메모리 초기화 함수
/*
int array[5] = { 10, 51, 678, 98, 88 };

for (int Element : array) { //int 대신 auto(자동변수)를 넣을 수 있다.
	printf("메모리 초기화 전 : %d\n", Element);
}
//
//for(int i = 0; i< 5; i++){
//	printf("%d\n", array[i]);
//	} 
//	와 같다.
//	

memset(array, 0, sizeof(array)); //메모리 초기화. (초기화할 변수, 초기화 할 값, 사이즈)
for (int Element : array) { //int 대신 auto(자동변수)를 넣을 수 있다.
	printf("메모리 초기화 후 : %d\n", Element); 
}
*/
/*
char value[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };

for (auto Element : value) {
	printf("메모리 초기화 전 : %c\n", Element);
}
memset(value, 'X', sizeof(char)*2);
for (auto Element : value) {
	printf("메모리 초기화 후 : %c\n", Element);  
}
*/

//메모리 카피 함수
/*
int array[3] = { 1,3,4 };
int origin[3];

memcpy(origin, array, sizeof(array));

for (int i = 0; i < 3; i++) {
	printf("%d\n", origin[i]);
}

const char* str = "Unity";
char origin_str[] = "UnrealEngineFive";

memcpy(origin_str, str, sizeof(char)*5); //+1을 하거나 *6을 하게되면 NULL문자를 포함. Unity만 출력된다.

printf("%s\n", origin_str);
*/

//메모리 이동 함수
/*
int array[3] = { 1,2,3 };
int origin[3];

memmove(origin, array, sizeof(array));

for (int i = 0; i < 3; i++) {
	printf("%d\n", origin[i]);
}
*/
}