//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      6�� 04�� ȭ����			(14�� 1��)
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
// 
// distance ����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <ranges>
#include "save.h"
#include "String.h"
using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

//--------
int main()
//--------
{
	std::list<int> list{ 1,2,3,4 };
	std::ranges::sort(list.begin(), list.end());
	
	save("STL.cpp");
}
