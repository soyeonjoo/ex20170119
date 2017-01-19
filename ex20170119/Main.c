#include<stdio.h>
#include<conio.h>
/* 바이너리 코드로 
void main() {
	FILE* pf;

	fopen_s(&pf, "test.txt", "w");

	{
		int data = 100;
		fwrite(&data, sizeof(int),1, pf);
	}
	fclose(pf);
}*/


//void main() {
//	FILE* pf;
//
//	fopen_s(&pf, "test.txt", "w");
//
//	{
//		int arr[5] = { 100,200,300,400,500 };
//		fwrite(arr, sizeof(int)*5, 1, pf); 20byte를 한번에 써라 
//	}
//	fclose(pf);
//}

//
//void main() {
//	FILE* pf;
//
//		fopen_s(&pf, "test.txt", "w");
//
//	{
//		int arr[5] = { 100,200,300,400,500 };
//		fwrite(arr, sizeof(int), 5, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//	}
//	fclose(pf);
//}

///*읽기*/ 
//void main() {
//	FILE* pf;
//
//	fopen_s(&pf, "test.txt", "r");
//
//	{
//		int n;
//		fread(&n, sizeof(int), 1, pf); //포지션은4byte씩 그다음으로 이동함 pf = 포지션 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //포지션은4byte씩 그다음으로 이동함 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //포지션은4byte씩 그다음으로 이동함 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //포지션은4byte씩 그다음으로 이동함 
//		printf("data:%d\n", n);
//
//	}
//	fclose(pf);
////}
///*읽기*/
//void main() {
//	FILE* pf;
//
//	fopen_s(&pf, "test.txt", "w");
//
//	{
//		int n = 10;
//		fwrite(&n, sizeof(int),1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//		//fread(&n, sizeof(int), 1, pf); //포지션은4byte씩 그다음으로 이동함 
//		printf("data:%d\n", n);
//
//
//	}
//	fclose(pf);
//}

//
///*쓰기*/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "wb"); //4byte로 저장됨
//	{
//		int n = 10;
//		fwrite(&n, sizeof(int), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//		printf("data:%d\n", n);
//	}
//	fclose(pf);
//}

//
///*쓰기*/
//void main() {
//	FILE* pf;
///	fopen_s(&pf, "test.txt", "wb"); //바이너리
//	{
//		char arr[2] = { 13,10 };
//		fwrite(arr, sizeof(char)*2,1 , pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//	}
//	fclose(pf);
//}

//
///*쓰기*/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "r"); 
//	{
//		char buf[10];
//		fgets(buf, 10,pf);
//		printf("%s", pf);
//	}
//	fclose(pf);
//}

//
///*쓰기*/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "wb");
//	{
//		int n = 100;
//		double d = 5.55;
//		char* s = "Hello!";
//	}
//	fclose(pf);
//}

//
///*쓰기
//*******/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "wb");
//	{
//		{
//			//File header part;
//			char head[2] = { 'M','Y' };
//			short ext = 0;
//			int dataCount = 5;
//			fwrite(head, sizeof(char) * 2, 1, pf);
//			fwrite(&ext, sizeof(short) , 1, pf);
//			fwrite(&dataCount, sizeof(int), 1, pf);
//
//		}
//
//		//FILE DATA
//		int n = 100;
//		double d = 5.55;
//		char* s = "Hello!";
//
//		{
//			char type = 'I';
//			fwrite(&type, sizeof(char), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(&n, sizeof(int) , 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//		} {
//			char type = 'D';
//			fwrite(&type, sizeof(char) , 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(&d, sizeof(double) , 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//		} {
//			char type = 'I';
//			fwrite(&type, sizeof(char), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(&n, sizeof(int) , 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//		}
//		{
//			char type = 'I';
//			fwrite(&type, sizeof(char), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(&n, sizeof(int), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//
//		}
//		{
//			char type = 'S';
//			int len = strlen(s) + 1;
//			fwrite(&type, sizeof(char), 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(&len, sizeof(int) , 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//			fwrite(s, len, 1, pf); //4byte를 5번써라 연속메모리일때만 사용가능 ! 
//
//		}
//	}
//	fclose(pf);
//}
//
//
///*읽기 
//*******/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "rb");
//	int dataCount = 0;
//	
//	if (pf == NULL) {
//		printf("파일 열기 실패");
//	}
//	
//	{
//		//헤더읽기
//		char head[2];
//		short ext;
//
//		fread(head, sizeof(char) * 2, 1, pf);
//		if ((head[0] != 'M') || (head[1] != 'Y')) {
//			printf("내파일이 아니다 !\n");
//			return;
//		}
//		fread(&ext, sizeof(short) , 1, pf);
//		fread(&dataCount, sizeof(int),  1, pf);
//		printf("파일의 원소 갯수 :%d !\n",dataCount);
//
//		
//	}
//	int i;
//	for (i = 0; i < dataCount; ++i) {
//		char type;
//		fread(&type, sizeof(char), 1, pf);
//			switch (type) {
//			case 'I':
//			{
//				int data;
//				fread(&data, sizeof(int), 1, pf);
//				printf("int:%d\n", data);
//				break;
//			}
//			case 'D':
//			{
//				double data;
//				fread(&data, sizeof(double), 1, pf);
//				printf("double:%g\n", data);
//				break;
//			}
//			case 'S': //여ㅑ기 안됨 ㅠ
//			{
//				char* s;
//				int len;
//				fread(&len, sizeof(int), 1, pf);
//				s = (char*)malloc(len);
//				fread(s, len, 1, pf);
//				printf("String:%s\n", s);
//				free(s);
//				break;
//			}
//				break;
//			default: 
//				printf("파일의 형식이 달라!!");
//				break;
//
//			}
//	}
//
//	fclose(pf);
//}
////
// 
///*읽기 fseek *******/
//
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "rb");
//	int pos = 0;
//	int dataCount = 0;
//
//	{
//		헤더읽기
//		char head[2];
//		short ext;
//
//		fread(head, sizeof(char) * 2, 1, pf);
//		if ((head[0] != 'M') || (head[1] != 'Y')) {
//			printf("내파일이 아니다 !\n");
//			return;
//		}
//		fread(&ext, sizeof(short), 1, pf);
//		fread(&dataCount, sizeof(int), 1, pf);
//		printf("파일의 원소 갯수 :%d !\n", dataCount);
//
//
//	}
//
//
//	fseek(pf, 8, SEEK_SET); // 시작을 기준으로 8byte건너 뛰어라 
//
//	for (int i = 0; i < dataCount; ++i) {
//
//		char type;
//		fread(&type, sizeof(char), 1, pf);
//		switch (type)
//		{
//		case 'I':
//		{
//			int data;
//			fread(&data, sizeof(int), 1, pf);
//			printf("int:%d\n", data);
//			break;
//		}
//		case 'D':
//		{
//			double data;
//			fread(&data, sizeof(double), 1, pf);
//			printf("double:%g\n", data);
//			break;
//		}
//		case 'S':
//		{
//			char* s;
//			int len;
//			fread(&len, sizeof(int), 1, pf);
//			s = (char*)malloc(len);
//			fread(s, len, 1, pf);
//			printf("String:%s\n", s);
//			free(s);
//			break;
//		}
//		default:
//			printf("파일의 형식이 달라!!");
//			break;
//
//		}
//	}
//
//	pos = ftell(pf); //현재위치 반환 
//	printf("file size: %d\n", pos);
//
//
//	fclose(pf);
//}


//
///*표준함수*/
//int main() { //표준
//	return 0;
//}

//
///*표준함수*/
//int main(int argc, char** argv) { // 표준
//	int i;
//	printf("argc:%d\n", argc);
//	for (i = 0; i < argc; ++i)
//		printf("argv[%d]:%s\n", i, argv[i]);
//	return 0;
//}

//
//enum{ A, B, C}; //상수
//void main() {
//	A = 10; //상수라 바꿀수없음 
//	printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);
//}
//

//
//enum _bool{ FALSE,TURE }; //상수
//void main() {
//	enum _bool b = TURE;
//	if (b == TURE)
//		printf("true\n");
//	else
//		printf("false\n");
//}
//
//typedef enum _bool { FALSE, TURE }BOOL; //구조체와 비슷하게 이름 지어줄수있음
//void main() {
//	BOOL  b = TURE;
//	if (b == TURE)
//		printf("true\n");
//	else
//		printf("false\n");
//}

//
//typedef enum _bool { FALSE, TURE }BOOL; //상수
//void main() {
//	BOOL  b = TURE;
//	while (b) {
//		if (_getch() == 'q')
//			b = FALSE;
//		else
//			printf("true\n");
//	}
//}
//
///*공용체*/
//typedef union _data {
//	int n;
//	double d;
//}Data;
//void main() {
//	Data data = { 10 };
//	printf("%d ", data.d);
//}
//
///*공용체*/
//typedef union _data {
//	int n;
//	double d;
//}Data;
//void main() {
//	Data data = { 10 };
//	data.d = 2.2;
//	printf("%g ", data.d);
//}

//
///*공용체*/
//typedef union _ip{// 전체 4바이트 
//	unsigned long dword;
//	struct _ip_word
//	{
//		unsigned short w1;
//		unsigned short w2;
//
//	}word;
//	struct _ip_byte
//	{
//		unsigned char b1;
//		unsigned char b2;
//		unsigned char b3;
//		unsigned char b4;
//	}byte;
//}IP;
//void main() {
//	IP data = { 0x12345678, };
//	printf("%x\n", data.dword);
//	printf("%x %x\n", data.word.w1, data.word.w2);//아래쪽부터들어감 
//	printf("%x  %x %x %x \n", data.byte.b1, data.byte.b2, data.byte.b3, data.byte.b4);
//}
//
///* 비트필드*/
//typedef struct _bit_filed //비트 제어
//{
//	unsigned int a : 4; 
//	unsigned int b : 1;
//	unsigned int c : 2;
//	unsigned int d : 4;
//	unsigned int e : 8;
//
//}BITFILED;
//void main() {
//	BITFILED bit = { 0 };
//
//	printf("%08X\n", bit);
//}

//
///* 비트필드*/
//typedef struct _bit_filed //비트 제어
//{
//	unsigned int a : 4;
//	unsigned int b : 1;
//unsigned int c : 2;// 0~3까지 저장가능 
				   //
//	unsigned int d : 4;
//	unsigned int e : 8;
//
//}BITFILED;
//void main() {
//	BITFILED bit = { 0 };
//	bit.c = 2;
//	bit.d = 4;
//
//	printf("%d\n", bit.c);
//}

//
///* 비트*/
//typedef struct _bit_filed //비트 제어
//{
//	unsigned int a : 8;
//	unsigned int b : 8;
//	unsigned int c : 8;// 0~3까지 저장가능 
//	//int c:2;
//	unsigned int d : 8;
//
//}BITFILED;
//void main() {
//	BITFILED bit = { 0 };
//	while (1){
//		switch (_getch())
//		{
//		case 'a':
//			bit.a ^= 0xFF;
//			break;
//		case 'b':
//			bit.b ^= 0xFF;
//			break;
//		case 'c':
//			bit.c ^= 0xFF;
//			break;
//		case 'd':
//			bit.d ^= 0xFF;
//			break;
//		default:
//			break;
//		}
//		printf("data : %08X\n", bit);
//
//	}
//}
//
///* 전처리*/
//#define MAX 5
//void main() {
//	printf("%d\n", MAX);
//	
//}
//
///* 전처리*/
//#define MAX 10
//void main() {
//	int arr[MAX];
//	int i;
//	for (i = 0; i < MAX; ++i) {
//		arr[i]=i + 1;
//	}
//	for (i = 0; i < MAX; ++i) {
//		printf("[%d] : %d\n",i, arr[i]);
//	}
//
//}
//
///* 전처리*/
//#define Max(a,b) a>b ? a : b
//void main() {
//	
//	printf("%d\n", Max(5, 10));
//
//}

//
///* 전처리*/
//#define Max(a,b) a>b ? a : b
//void main() { //큰값 찾기 함수 
//	int n1 = 50;
//	int n2 = 40;
//
//	printf("%d\n", Max(n1, n2));
//
//}
//
///* 전처리*/
//#define Max(a,b) a>b ? a : b
//void main() { //큰값 찾기 함수 
//	int a = 10, b = 5;
//	printf("%d\n", Max(++a, ++b));// 안됨!!!!!!!!!!!! 이것은 printf("%d\n",++a>++b ? ++a : ++b ) 와 같은것 
//	printf("%d %d\n", a, b);
//
//}
//
///* 전처리*/
//void PrintArray(int arr[], int size) {
//	int i;
//	for (i = 0; i < size; ++i)
//		printf("%d\n", arr[i]);
//}
//void main() { //큰값 찾기 함수 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}
//
//#define  PrintArray(arr, size) {int i; for (i = 0; i < size; ++i)printf("%d\n", arr[i]); } //한줄에 다 완성해야함  
//void main() { //큰값 찾기 함수 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}
//
////\를 쓰면 아직 끝나지않았다는뜻
//#define  PrintArray(arr, size)\
//{\
//int i;\
//for (i = 0; i < size; ++i)\
//printf("%d\n", arr[i]);\
//}
//
//void main() { //큰값 찾기 함수 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}


//\를 쓰면 아직 끝나지않았다는뜻
//
//void main() { //큰값 찾기 함수 
//#ifdef _INT_ 
//	int data = 100;
//	printf("int : %d\n", data);
//#else
//	double data = 5.567;
//	printf("double:%g\n", data);
//
//#endif
//}
//



//#define _INT
//void main() { 
//#ifndef _INT_ 
//	int data = 100;
//	printf("int : %d\n", data);
//#else
//	double data = 5.567;
//	printf("double:%g\n", data);
//
//#endif
//}


///*?????????*/
//void main() { 
//#ifndef _DOUBLE_ 
//	int data = 100;
//	printf("int : %d\n", data);
//#else
//	double data = 5.567;
//	printf("double:%g\n", data);
//
//#endif
//}


/*?????????*/

void main() {
#ifndef _DOUBLE_ 
	int data = 100;
	printf("int : %d\n", data);
#else
	double data = 5.567;
	printf("double:%g\n", data);

#endif
}
