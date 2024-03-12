//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 12일 화요일			(2주 1일)
// 
// 많은 수의 데이터를 처리할 수 있어야...
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <algorithm>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

// [문제] "int값들.txt"에는 몇 개인지 모르는 int 값이 있다.
// 그중 제일 큰 값을 찾아 화면에 출력하라.

//--------
int main()
//--------
{
	std::ifstream in{ "int값들.txt" };
	if (not in)
		exit(0);

	std::cout << *std::max_element(std::istream_iterator<int>{in}, {}) << std::endl;

	save("STL.cpp");
}
