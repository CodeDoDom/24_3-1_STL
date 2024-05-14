//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 14�� ȭ����			(11�� 1��)
// 
// �˰��� �Լ� - �ݺ��ڸ� ���ڷ� �޴´�.
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

template <class InIter, class Outlter>
void my_copy(InIter b, InIter e, Outlter d )
{
	while(b != e){
		*d = *b;
		++b;
		++d;
	}
}

//--------
int main()
//--------
{
	save("STL.cpp");

	String s{ "STL algorithm 2024�� 5�� 14��" };
	std::vector<char> v;

	my_copy(s.begin(), s.end(),  std::back_inserter(v));
	
	for (char c : v)
		std::cout << c;
	std::cout << std::endl;
}
