//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 23일 목요일			(12주 2일)
// 
// Unordered Assoiative Container - unordered_set / unordered_map
// - 순서가 없다.
// - 메모리를 어떻게 사용하여 복잡도가 0(1)인가
// - 내가 만든 String을 저장하려면 어떻게 해야 되는가.
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <unordered_set>
#include <print>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

void print_us(const std::unordered_multiset<int>& us)
{
	std::cout << "언오더드 멀티셋의 메모리 구조" << std::endl;

	for (int i = 0; i < us.bucket_count(); ++i) {
		std::print("[{:3}]", i);
		for (auto p = us.begin(i); p != us.end(i); ++p) {
			std::cout << ": " << *p;
		}
		std::cout << std::endl;
	}

}

//--------
int main()
//--------
{
	save("STL.cpp");

	std::unordered_multiset<int> us{ 3,1,2,4,10 };

	while (true) {
		std::cout << "추가할 값은? ";
		int num;
		std::cin >> num;
		us.insert(num);

		print_us(us);

		std::cout << std::endl;
	}
}
