//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 18일 목요일			(7주 2일)
// 
// 4월 25일 (8주 2일) - 중간시험
// 
// STL container - Sequence - deque(덱)
// 덱 -> 벡터와 리스트의 중간
// 
// push_back, push_front -> O(1) 알고리즘
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

class Test {
	char x[4'096];
};

//--------
int main()
//--------
{
	//std::vector<Test> v;		// 3543306

	//std::deque<Test> v;		// 58xxxxx

	std::list<Test> v;			// deque보다 조금 더 크게 나올 듯(아마)

	size_t cnt{};

	while (true){
		try {
			v.emplace_back();
			++cnt;
		}
		catch (...) {
			std::cout << "최대 개수 - " << v.size() << std::endl;
			return 0;
		}
		if (cnt % 10'0000 == 0)
			std::cout << cnt << std::endl;
	}
	
	save("STL.cpp");
}
