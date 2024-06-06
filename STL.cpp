//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      6�� 06�� �����			(14�� 2��)
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
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
// using namespace std;	// ������� �ʰ� �ڵ�

std::default_random_engine dre;
std::uniform_int_distribution uid;

std::array<int, 2'5000'0000> a;

// for - loop
// �ɸ� �ð�: 141ms
// �հ�: 268416090773281637

// �˰��� - accumulate
// �ɸ� �ð� : 165ms
// �հ� : 268416090773281637

// �˰��� reduce
// �ɸ� �ð� : 79ms
// �հ� : 268416090773281637

// �˰��� - reduce(execution::par)
// �ɸ� �ð� : 61ms
// �հ� : 268416090773281637

//--------
int main()
//--------
{
	for (int& num : a)
		num = uid(dre);
	
	// �ջ�
	long long sum{};

	auto b = std::chrono::high_resolution_clock::now();
	
	sum = std::reduce(std::execution::par, a.begin(), a.end(), 0LL);

	auto d = std::chrono::high_resolution_clock::now() - b;
	std::cout << "�ɸ� �ð�: " << std::chrono::duration_cast<std::chrono::milliseconds>(d) << std::endl;
	std::cout << "�հ�: " << sum << std::endl;

	save("STL.cpp");
}
