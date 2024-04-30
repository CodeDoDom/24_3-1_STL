//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 30�� ȭ����			(9�� 1��)
// 
// list
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <fstream>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

//--------
int main()
//--------
{
	// [����] ���� "STL.cpp"�� �ܾ �о� ������ �� ����϶�.
	std::ifstream in("STL.cpp");

	std::list<String> cont{ std::istream_iterator<String>{in}, {} };

	cont.sort();

	cont.unique();		// �ߺ��� ���Ҹ� �����Ѵ�.

	for (const String& s : cont)
		std::cout << s << std::endl;

	save("STL.cpp");
}
