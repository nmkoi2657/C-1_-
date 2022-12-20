// 2차 프로그래밍 과제입니다.
// 경영학부 201910563 강태규 입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int checkCondition(const char* str)
{
	int cnt;
	for (cnt = 0; str[cnt]; cnt++);
	return cnt;
}

int checkMix8(const char* str)
{
	if (checkCondition(str) == 8)
	{
		int check = 0;
		for (int i = 0; i < 8; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') check = check + 1;
		}
		return check;
	}
}
int checkMix9(const char* str)
{
	if (checkCondition(str) == 9)
	{
		int check = 0;
		for (int i = 0; i < 9; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') check = check + 1;
		}
		return check;
	}
}
int checkMix10(const char* str)
{
	if (checkCondition(str) == 10)
	{
		int check = 0;
		for (int i = 0; i < 10; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') check = check + 1;
		}
		return check;
	}
}
int checkMix11(const char* str)
{
	if (checkCondition(str) == 11)
	{
		int check = 0;
		for (int i = 0; i < 11; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') check = check + 1;
		}
		return check;
	}
}
int checkMix12(const char* str)
{
	if (checkCondition(str) == 12)
	{
		int check = 0;
		for (int i = 0; i < 12; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') check = check + 1;
		}
		return check;
	}
}
void encode(char* str, int length, char* encodingTable, char* newStr)
{
	for (int i = 0; i < 12; i++)
	{
		if (str[i] == 'a') str[i] = encodingTable[0];
		else if (str[i] == 'b') str[i] = encodingTable[1];
		else if (str[i] == 'c') str[i] = encodingTable[2];
		else if (str[i] == 'd') str[i] = encodingTable[3];
		else if (str[i] == 'e') str[i] = encodingTable[4];
		else if (str[i] == 'f') str[i] = encodingTable[5];
		else if (str[i] == 'g') str[i] = encodingTable[6];
		else if (str[i] == 'h') str[i] = encodingTable[7];
		else if (str[i] == 'i') str[i] = encodingTable[8];
		else if (str[i] == 'j') str[i] = encodingTable[9];
		else if (str[i] == 'k') str[i] = encodingTable[10];
		else if (str[i] == 'l') str[i] = encodingTable[11];
		else if (str[i] == 'm') str[i] = encodingTable[12];
		else if (str[i] == 'o') str[i] = encodingTable[14];
		else if (str[i] == 'p') str[i] = encodingTable[15];
		else if (str[i] == 'q') str[i] = encodingTable[16];
		else if (str[i] == 'r') str[i] = encodingTable[17];
		else if (str[i] == 's') str[i] = encodingTable[18];
		else if (str[i] == 't') str[i] = encodingTable[19];
		else if (str[i] == 'u') str[i] = encodingTable[20];
		else if (str[i] == 'v') str[i] = encodingTable[21];
		else if (str[i] == 'w') str[i] = encodingTable[22];
		else if (str[i] == 'x') str[i] = encodingTable[23];
		else if (str[i] == 'y') str[i] = encodingTable[24];
		else if (str[i] == 'z') str[i] = encodingTable[25];
		else if (str[i] == '0') str[i] = '2';
		else if (str[i] == '1') str[i] = '3';
		else if (str[i] == '2') str[i] = '4';
		else if (str[i] == '3') str[i] = '5';
		else if (str[i] == '4') str[i] = '6';
		else if (str[i] == '5') str[i] = '7';
		else if (str[i] == '6') str[i] = '8';
		else if (str[i] == '7') str[i] = '9';
		else if (str[i] == '8') str[i] = '0';
		else if (str[i] == '9') str[i] = '1';
	}
	printf("\n입력하신 패스워드가 %s로 암호화 되었습니다.\n", str);
}
void decode(char* str, int length, char* encordingTable, char* newStr)
{
	for (int i = 0; i < 12; i++)
	{
		if (str[i] == 'w') str[i] = encordingTable[20];
		else if (str[i] == 'y') str[i] = encordingTable[14];
		else if (str[i] == 'h') str[i] = encordingTable[22];
		else if (str[i] == 'f') str[i] = encordingTable[16];
		else if (str[i] == 'x') str[i] = encordingTable[12];
		else if (str[i] == 'u') str[i] = encordingTable[3];
		else if (str[i] == 'm') str[i] = encordingTable[11];
		else if (str[i] == 't') str[i] = encordingTable[2];
		else if (str[i] == 'j') str[i] = encordingTable[25];
		else if (str[i] == 'v') str[i] = encordingTable[8];
		else if (str[i] == 's') str[i] = encordingTable[24];
		else if (str[i] == 'g') str[i] = encordingTable[18];
		else if (str[i] == 'e') str[i] = encordingTable[6];
		else if (str[i] == 'n') str[i] = encordingTable[13];
		else if (str[i] == 'b') str[i] = encordingTable[23];
		else if (str[i] == 'r') str[i] = encordingTable[21];
		else if (str[i] == 'd') str[i] = encordingTable[19];
		else if (str[i] == 'z') str[i] = encordingTable[15];
		else if (str[i] == 'l') str[i] = encordingTable[10];
		else if (str[i] == 'q') str[i] = encordingTable[7];
		else if (str[i] == 'a') str[i] = encordingTable[5];
		else if (str[i] == 'p') str[i] = encordingTable[9];
		else if (str[i] == 'c') str[i] = encordingTable[0];
		else if (str[i] == 'o') str[i] = encordingTable[4];
		else if (str[i] == 'k') str[i] = encordingTable[1];
		else if (str[i] == 'i') str[i] = encordingTable[17];
		else if (str[i] == '2') str[i] = '0';
		else if (str[i] == '3') str[i] = '1';
		else if (str[i] == '4') str[i] = '2';
		else if (str[i] == '5') str[i] = '3';
		else if (str[i] == '6') str[i] = '4';
		else if (str[i] == '7') str[i] = '5';
		else if (str[i] == '8') str[i] = '6';
		else if (str[i] == '9') str[i] = '7';
		else if (str[i] == '0') str[i] = '8';
		else if (str[i] == '1') str[i] = '9';
	}
	printf("\n이를 다시 복호화한 결과, 패스워드는 %s입니다.\n", str);
}
int main()
{
	char str[1000];
	printf("패스워드를 입력하세요 (숫자와 앞파벳을 혼합하여 8-12자): ");
	scanf("%s", str);

	for (int i = 0; i < 20; i++)
	{
		if (checkCondition(str) < 8 || checkCondition(str) > 12)
		{
			printf("\n범위 내의 문자 수로 다시 입력하세요: ");
			scanf("%s", str);
		}

		else if (checkCondition(str) == 8)
		{
			if (checkMix8(str) == 1 || checkMix8(str) == 2 || checkMix8(str) == 3 || checkMix8(str) == 4 || checkMix8(str) == 5 || checkMix8(str) == 6 || checkMix8(str) == 7) break;
			else printf("\n숫자와 알파벳을 혼합해 주세요: ");
			scanf("%s", str);
		}

		else if (checkCondition(str) == 9)
		{
			if (checkMix9(str) == 1 || checkMix9(str) == 2 || checkMix9(str) == 3 || checkMix9(str) == 4 || checkMix9(str) == 5 || checkMix9(str) == 6 || checkMix9(str) == 7 || checkMix9(str) == 8) break;
			else printf("\n숫자와 알파벳을 혼합해 주세요: ");
			scanf("%s", str);
		}

		else if (checkCondition(str) == 10)
		{
			if (checkMix10(str) == 1 || checkMix10(str) == 2 || checkMix10(str) == 3 || checkMix10(str) == 4 || checkMix10(str) == 5 || checkMix10(str) == 6 || checkMix10(str) == 7 || checkMix10(str) == 8 || checkMix10(str) == 9) break;
			else printf("\n숫자와 알파벳을 혼합해 주세요: ");
			scanf("%s", str);
		}
		else if (checkCondition(str) == 11)
		{
			if (checkMix11(str) == 1 || checkMix11(str) == 2 || checkMix11(str) == 3 || checkMix11(str) == 4 || checkMix11(str) == 5 || checkMix11(str) == 6 || checkMix11(str) == 7 || checkMix11(str) == 8 || checkMix11(str) == 9 || checkMix11(str) == 10) break;
			else printf("\n숫자와 알파벳을 혼합해 주세요: ");
			scanf("%s", str);
		}
		else if (checkCondition(str) == 12)
		{
			if (checkMix12(str) == 1 || checkMix12(str) == 2 || checkMix12(str) == 3 || checkMix12(str) == 4 || checkMix12(str) == 5 || checkMix12(str) == 6 || checkMix12(str) == 7 || checkMix12(str) == 8 || checkMix12(str) == 9 || checkMix12(str) == 10 || checkMix12(str) == 11) break;
			else printf("\n숫자와 알파벳을 혼합해 주세요: ");
			scanf("%s", str);
		}
		else
		{
			printf("\n범위 내의 문자수로 다시 입력하세요: ");
			scanf("%s", str);
		}
	}
	char newStr[12] = { 0 };

	char* encodingTable = "wyhfxumtjvsgenbrdzlqapcoki";

	encode(str, checkCondition(str), encodingTable, 0);
	
	decode(str, checkCondition(str), encodingTable, 0);
	
	return 0;
}