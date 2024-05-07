//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 7일 화요일			(10주 1일)
// 
// 반복자: iterator - 반복자는 포인터를 일반화한 것이다.
//  
// Iterators are a generalization of pointers 
// that allow a C++ program to work with different data structures
// in a uniform manner.
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <span>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	String s{ "1357924680" };

	// s의 반복자 - random_access_iterator_tag

	save("STL.cpp");
}
