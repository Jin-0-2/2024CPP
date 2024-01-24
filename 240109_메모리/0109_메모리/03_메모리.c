// 03_메모리.c
/*
----------------------------------------------------------------------------------
- 지역/전역 : 선언위치
- 정적		: static(정적지역변수, 정적전역변수) > static이 붙으면 무조건 전역정적메모리에 저장 > 함수 종료되어도 소멸 x
[데이터]
			생성/ 소멸		특징						예)
----------------------------------------------------------------------------------
스택		함수			휘발성(임시)				지역변수, 매개변수

전역정적	프로그램		영구적(프로그램 동작 중)	전역변수, 정적변수									> 프로그램 시작 시 생성, 종료 시 소멸			

힙			[내맘대로]----------------------------------------------------------
----------------------------------------------------------------------------------
[코드]		*함수(함수 포인터)
*/
#include <stdio.h>

int g_num;			// 전역변수 -> 전역정적메모리 : 누구나(프로그램) 사용가능

void fun1(int n);

int main()
{
	g_num = 1;
	return 0;
}

void fun1(int n)	// 매개변수 -> fun1스택 : 해당 함수 내에서만{}
{
	int n1;			// 지역변수 -> fun1스택 : 해당 함수 내에서만{}
	{
		int n1;		// 지역변수 -> fun1스택

		n1 = 10;
	}
	n1 = 10;
}