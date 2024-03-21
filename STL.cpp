//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 21일 목요일			(3주 2일)
// 
// 실행파일의 메모리 구조 - 찾아보세요: STACK CODE DATA Free Store
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

int a[1'000'000]{ 1 };

//--------
int main()
//--------
{
	std::cout << a[0] << std::endl;
	std::cout << a[999'999] << std::endl;

	save("STL.cpp");
}
