//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 21일 화요일			(12주 1일)
// 
// Assoiative Container - set / map
// 
// map<key, value> - dictionary
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <algorithm>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	save("STL.cpp");

	// [문제] 소설에 사용된 영문자와 그 사용횟수를 횟수 기준 내림차순으로 출력하라.
	// 대문자는 소문자로 변환한다.
	
	// 내 답
	/*std::map<char, int> cim;

	std::ifstream in{ "이상한 나라의 앨리스.txt" };

	char c;
	while (in >> c) {
		if (std::isalpha(c))
			cim[tolower(c)]++;
	}

	for (auto [소문자, 횟수] : cim) {
		std::sort(cim.begin(), cim.end());
		std::cout << 소문자 << ": " << 횟수 << std::endl;
	}*/

}
