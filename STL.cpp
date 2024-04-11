//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 11일 목요일			(6주 2일)
// 
// 4월 25일 (8주 1일) - 중간시험
// 
// STL container - Sequence - vector(dynamic array - [] operator)
//	array는 continuos data다.
//	dynamic <=> static
//	dynamic := run time
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <ranges>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	관찰 = true;

	// [문제] 키보드에서 입력한 int 값의 합계와 평균값을 출력하라.
	std::vector<int> v{ std::istream_iterator<int>{std::cin}, {} };

	for (int num : v)
		std::cout << num << " ";

	save("STL.cpp");
}
