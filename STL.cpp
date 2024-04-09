//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 9일 화요일			(6주 1일)
// 
// 4월 25일 (8주 1일) - 중간시험
// 
// STL Container - Containers are objects that store other objects.
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <fstream>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	std::array<String, 50> a;

	// [문제] "STL.cpp"의 단어를 a에 저장하라.
	// 길이 오름차순으로 a를 정렬하라.
	// 화면에 출력하라.

	std::ifstream in{ "STL.cpp" };

	for (int i = 0; i < 50; ++i)
		in >> a[i];		// in >> std::string 을 이용해서 하자

	save("STL.cpp");
}
