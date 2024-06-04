//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      5월 30일 목요일			(13주 2일)
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
// 
// 정렬관련 Algorithm - 복잡도 순으로
// partition			- 조건에 따라 분리
// nth_element			- n등까지와 나머지로 분리
// partial_sort			- n등까지는 정렬된 상태로 나머지는 무관
// sort					- 전체 정렬
// stable_sort
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <algorithm>
#include <print>
#include <random>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

std::random_device rd;
std::default_random_engine dre{rd()};
std::uniform_int_distribution uid{ 1, 50 };
//std::uniform_int_distribution uidC{ 'A', 'Z' };

struct Dog {
	char c;
	int n;

	Dog() {
		//c = uidC(dre);
		n = uid(dre);
	}
};

//--------
int main()
//--------
{
	// stable_sort

	std::array<Dog, 100> dogs;

	std::sort(dogs.begin(), dogs.end(), [](const Dog& a, const Dog& b) {
		return a.c < b.c;
		});

	for (auto [글자, 숫자] : dogs)
		std::cout << 글자 << " - " << 숫자 << std::endl;

	save("STL.cpp");
}
