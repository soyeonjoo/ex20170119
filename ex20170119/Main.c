#include<stdio.h>
#include<conio.h>
/* ���̳ʸ� �ڵ�� 
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
//		fwrite(arr, sizeof(int)*5, 1, pf); 20byte�� �ѹ��� ��� 
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
//		fwrite(arr, sizeof(int), 5, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//	}
//	fclose(pf);
//}

///*�б�*/ 
//void main() {
//	FILE* pf;
//
//	fopen_s(&pf, "test.txt", "r");
//
//	{
//		int n;
//		fread(&n, sizeof(int), 1, pf); //��������4byte�� �״������� �̵��� pf = ������ 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //��������4byte�� �״������� �̵��� 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //��������4byte�� �״������� �̵��� 
//		printf("data:%d\n", n);
//
//		fread(&n, sizeof(int), 1, pf); //��������4byte�� �״������� �̵��� 
//		printf("data:%d\n", n);
//
//	}
//	fclose(pf);
////}
///*�б�*/
//void main() {
//	FILE* pf;
//
//	fopen_s(&pf, "test.txt", "w");
//
//	{
//		int n = 10;
//		fwrite(&n, sizeof(int),1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//		//fread(&n, sizeof(int), 1, pf); //��������4byte�� �״������� �̵��� 
//		printf("data:%d\n", n);
//
//
//	}
//	fclose(pf);
//}

//
///*����*/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "wb"); //4byte�� �����
//	{
//		int n = 10;
//		fwrite(&n, sizeof(int), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//		printf("data:%d\n", n);
//	}
//	fclose(pf);
//}

//
///*����*/
//void main() {
//	FILE* pf;
///	fopen_s(&pf, "test.txt", "wb"); //���̳ʸ�
//	{
//		char arr[2] = { 13,10 };
//		fwrite(arr, sizeof(char)*2,1 , pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//	}
//	fclose(pf);
//}

//
///*����*/
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
///*����*/
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
///*����
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
//			fwrite(&type, sizeof(char), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(&n, sizeof(int) , 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//		} {
//			char type = 'D';
//			fwrite(&type, sizeof(char) , 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(&d, sizeof(double) , 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//		} {
//			char type = 'I';
//			fwrite(&type, sizeof(char), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(&n, sizeof(int) , 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//		}
//		{
//			char type = 'I';
//			fwrite(&type, sizeof(char), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(&n, sizeof(int), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//
//		}
//		{
//			char type = 'S';
//			int len = strlen(s) + 1;
//			fwrite(&type, sizeof(char), 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(&len, sizeof(int) , 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//			fwrite(s, len, 1, pf); //4byte�� 5����� ���Ӹ޸��϶��� ��밡�� ! 
//
//		}
//	}
//	fclose(pf);
//}
//
//
///*�б� 
//*******/
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "rb");
//	int dataCount = 0;
//	
//	if (pf == NULL) {
//		printf("���� ���� ����");
//	}
//	
//	{
//		//����б�
//		char head[2];
//		short ext;
//
//		fread(head, sizeof(char) * 2, 1, pf);
//		if ((head[0] != 'M') || (head[1] != 'Y')) {
//			printf("�������� �ƴϴ� !\n");
//			return;
//		}
//		fread(&ext, sizeof(short) , 1, pf);
//		fread(&dataCount, sizeof(int),  1, pf);
//		printf("������ ���� ���� :%d !\n",dataCount);
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
//			case 'S': //������ �ȵ� ��
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
//				printf("������ ������ �޶�!!");
//				break;
//
//			}
//	}
//
//	fclose(pf);
//}
////
// 
///*�б� fseek *******/
//
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "rb");
//	int pos = 0;
//	int dataCount = 0;
//
//	{
//		����б�
//		char head[2];
//		short ext;
//
//		fread(head, sizeof(char) * 2, 1, pf);
//		if ((head[0] != 'M') || (head[1] != 'Y')) {
//			printf("�������� �ƴϴ� !\n");
//			return;
//		}
//		fread(&ext, sizeof(short), 1, pf);
//		fread(&dataCount, sizeof(int), 1, pf);
//		printf("������ ���� ���� :%d !\n", dataCount);
//
//
//	}
//
//
//	fseek(pf, 8, SEEK_SET); // ������ �������� 8byte�ǳ� �پ�� 
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
//			printf("������ ������ �޶�!!");
//			break;
//
//		}
//	}
//
//	pos = ftell(pf); //������ġ ��ȯ 
//	printf("file size: %d\n", pos);
//
//
//	fclose(pf);
//}


//
///*ǥ���Լ�*/
//int main() { //ǥ��
//	return 0;
//}

//
///*ǥ���Լ�*/
//int main(int argc, char** argv) { // ǥ��
//	int i;
//	printf("argc:%d\n", argc);
//	for (i = 0; i < argc; ++i)
//		printf("argv[%d]:%s\n", i, argv[i]);
//	return 0;
//}

//
//enum{ A, B, C}; //���
//void main() {
//	A = 10; //����� �ٲܼ����� 
//	printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);
//}
//

//
//enum _bool{ FALSE,TURE }; //���
//void main() {
//	enum _bool b = TURE;
//	if (b == TURE)
//		printf("true\n");
//	else
//		printf("false\n");
//}
//
//typedef enum _bool { FALSE, TURE }BOOL; //����ü�� ����ϰ� �̸� �����ټ�����
//void main() {
//	BOOL  b = TURE;
//	if (b == TURE)
//		printf("true\n");
//	else
//		printf("false\n");
//}

//
//typedef enum _bool { FALSE, TURE }BOOL; //���
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
///*����ü*/
//typedef union _data {
//	int n;
//	double d;
//}Data;
//void main() {
//	Data data = { 10 };
//	printf("%d ", data.d);
//}
//
///*����ü*/
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
///*����ü*/
//typedef union _ip{// ��ü 4����Ʈ 
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
//	printf("%x %x\n", data.word.w1, data.word.w2);//�Ʒ��ʺ��͵� 
//	printf("%x  %x %x %x \n", data.byte.b1, data.byte.b2, data.byte.b3, data.byte.b4);
//}
//
///* ��Ʈ�ʵ�*/
//typedef struct _bit_filed //��Ʈ ����
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
///* ��Ʈ�ʵ�*/
//typedef struct _bit_filed //��Ʈ ����
//{
//	unsigned int a : 4;
//	unsigned int b : 1;
//unsigned int c : 2;// 0~3���� ���尡�� 
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
///* ��Ʈ*/
//typedef struct _bit_filed //��Ʈ ����
//{
//	unsigned int a : 8;
//	unsigned int b : 8;
//	unsigned int c : 8;// 0~3���� ���尡�� 
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
///* ��ó��*/
//#define MAX 5
//void main() {
//	printf("%d\n", MAX);
//	
//}
//
///* ��ó��*/
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
///* ��ó��*/
//#define Max(a,b) a>b ? a : b
//void main() {
//	
//	printf("%d\n", Max(5, 10));
//
//}

//
///* ��ó��*/
//#define Max(a,b) a>b ? a : b
//void main() { //ū�� ã�� �Լ� 
//	int n1 = 50;
//	int n2 = 40;
//
//	printf("%d\n", Max(n1, n2));
//
//}
//
///* ��ó��*/
//#define Max(a,b) a>b ? a : b
//void main() { //ū�� ã�� �Լ� 
//	int a = 10, b = 5;
//	printf("%d\n", Max(++a, ++b));// �ȵ�!!!!!!!!!!!! �̰��� printf("%d\n",++a>++b ? ++a : ++b ) �� ������ 
//	printf("%d %d\n", a, b);
//
//}
//
///* ��ó��*/
//void PrintArray(int arr[], int size) {
//	int i;
//	for (i = 0; i < size; ++i)
//		printf("%d\n", arr[i]);
//}
//void main() { //ū�� ã�� �Լ� 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}
//
//#define  PrintArray(arr, size) {int i; for (i = 0; i < size; ++i)printf("%d\n", arr[i]); } //���ٿ� �� �ϼ��ؾ���  
//void main() { //ū�� ã�� �Լ� 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}
//
////\�� ���� ���� �������ʾҴٴ¶�
//#define  PrintArray(arr, size)\
//{\
//int i;\
//for (i = 0; i < size; ++i)\
//printf("%d\n", arr[i]);\
//}
//
//void main() { //ū�� ã�� �Լ� 
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr, 5);
//
//}


//\�� ���� ���� �������ʾҴٴ¶�
//
//void main() { //ū�� ã�� �Լ� 
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
