//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      6월 04일 화요일			(14주 1일)
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
// 
// distance 구현
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <ranges>
#include "save.h"
#include "String.h"
using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	std::list<int> list{ 1,2,3,4 };
	std::ranges::sort(list.begin(), list.end());
	
	save("STL.cpp");
}
