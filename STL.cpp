//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 11�� �����			(6�� 2��)
// 
// 4�� 25�� (8�� 1��) - �߰�����
// 
// STL container - Sequence - vector(dynamic array - [] operator)
//	array�� continuos data��.
//	dynamic <=> static
//	dynamic := run time
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <ranges>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

//--------
int main()
//--------
{
	���� = true;

	// [����] Ű���忡�� �Է��� int ���� �հ�� ��հ��� ����϶�.
	std::vector<int> v{ std::istream_iterator<int>{std::cin}, {} };

	for (int num : v)
		std::cout << num << " ";

	save("STL.cpp");
}
