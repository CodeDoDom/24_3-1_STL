//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 30�� �����			(13�� 2��)
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
// 
// ���İ��� Algorithm - ���⵵ ������
// partition			- ���ǿ� ���� �и�
// nth_element			- n������� �������� �и�
// partial_sort			- n������� ���ĵ� ���·� �������� ����
// sort					- ��ü ����
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
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

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

	for (auto [����, ����] : dogs)
		std::cout << ���� << " - " << ���� << std::endl;

	save("STL.cpp");
}
