//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 2일 목요일			(9주 2일)
// 
// 반복자: iterator - 반복자는 포인터를 일반화한 것이다.
//  
// Iterators are a generalization of pointers 
// that allow a C++ program to work with different data structures
// in a uniform manner.
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

template<class 반복자>
void f(반복자 iter)
{
	std::cout << typeid(반복자::iterator_category).name() << std::endl;
}

//--------
int main()
//--------
{
	// 클래스 String은 contiguous 메모리를 관리한다.
	// 다음 코드가 실행되게 하라.

	String s{ "0123456789" };

	//for (char s : s)				// begin, end를 제공해야 함.
	//	std::cout << s << ' ';
	//std::cout << std::endl;

	save("STL.cpp");
}
