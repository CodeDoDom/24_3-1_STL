//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      6월 06일 목요일			(14주 2일)
//  
// 6월  6일 목(현충일): 강의 예정
// 6월 13일 목(15주 2일): 기말 시험
// 
// C++20 Concept / Range
// 
// for/accumulate/reduce
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <array>
#include <random>
#include <chrono>
#include <numeric>
#include <execution>
#include "save.h"
#include "String.h"
// using namespace std;	// 사용하지 않고 코딩

std::default_random_engine dre;
std::uniform_int_distribution uid;

std::array<int, 2'5000'0000> a;

// for - loop
// 걸린 시간: 141ms
// 합계: 268416090773281637

// 알고리즘 - accumulate
// 걸린 시간 : 165ms
// 합계 : 268416090773281637

// 알고리즘 reduce
// 걸린 시간 : 79ms
// 합계 : 268416090773281637

// 알고리즘 - reduce(execution::par)
// 걸린 시간 : 61ms
// 합계 : 268416090773281637

//--------
int main()
//--------
{
	for (int& num : a)
		num = uid(dre);
	
	// 합산
	long long sum{};

	auto b = std::chrono::high_resolution_clock::now();
	
	sum = std::reduce(std::execution::par, a.begin(), a.end(), 0LL);

	auto d = std::chrono::high_resolution_clock::now() - b;
	std::cout << "걸린 시간: " << std::chrono::duration_cast<std::chrono::milliseconds>(d) << std::endl;
	std::cout << "합계: " << sum << std::endl;

	save("STL.cpp");
}
