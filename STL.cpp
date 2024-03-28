//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 28일 목요일			(4주 2일)
// 
// callable type -> 정렬 예제에서 시작
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <random>
#include <print>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

// [문제] int 100개를 저장할 공간을 확보하라.
// int 100개의 값을 [1, 10000] 사이의 랜덤값으로 설정하라.
// int 값 100개를 C의 qsort를 사용하여 오름차순으로 정렬하라.
// 정렬결과를 한 줄에 10개씩 화면에 출력하라.

std::array<int, 100> a;
std::uniform_int_distribution uid{ 1, 10'000 };		//std::normal_distribution
std::default_random_engine dre;

int 정렬방법(const void* a, const void* b);

//--------
int main()
//--------
{
	for (int& num : a)
		num = uid(dre);

	// 여기서 qsort로 오름차순 정렬한다. - qsort는 C 함수이지만, generic 함수이다.
	//qsort(어디를, 몇 개를, 한 개의 크기는?, 너만의 정렬방법을 알려줘)

	//qsort(a.data(), a.size(), sizeof(int), [](const void* a, const void* b) {
	//	return *(int*)a - *(int*)b;
	//	});
	int(*함수)(const void*, const void*)= 정렬방법;		// 함수... 포인터..........(?)

	qsort(a.data(), a.size(), sizeof(int), 함수);

	for (int num : a)
		std::print("{:8}", num);

	save("STL.cpp");
}

int 정렬방법(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}