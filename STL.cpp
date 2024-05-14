//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 14일 화요일			(11주 1일)
// 
// 알고리즘 함수 - 반복자만 인자로 받는다.
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

template <class InIter, class Outlter>
void my_copy(InIter b, InIter e, Outlter d )
{
	while(b != e){
		*d = *b;
		++b;
		++d;
	}
}

//--------
int main()
//--------
{
	save("STL.cpp");

	String s{ "STL algorithm 2024년 5월 14일" };
	std::vector<char> v;

	my_copy(s.begin(), s.end(),  std::back_inserter(v));
	
	for (char c : v)
		std::cout << c;
	std::cout << std::endl;
}
