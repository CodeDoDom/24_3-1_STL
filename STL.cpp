//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 23�� ȭ����			(8�� 1��)
// 
// 4�� 25�� (8�� 2��) - �߰�����
// 
// list
// 
// (å <����� C++> ����)
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <fstream>
#include <algorithm>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

//--------
int main()
//--------
{
	std::list<String> cont;

	std::ifstream in{ "String.cpp" };
	if (not in)
		return 0;

	cont = { std::istream_iterator<String>{in}, {} };

	// cont�� ���̿����������� �����϶�.
	cont.sort([](const String& a, const String& b) {
		return a.getLen() < b.getLen();
		});

	// [����] cont���� ���̰� 5�� ���Ҹ� ȭ�鿡 ����϶�.
	copy_if(cont.begin(), cont.end(), std::ostream_iterator<String>{std::cout, "\n"},	// �굵 ���� ��, ��ü �����͸� �ϳ��� �Ⱦ�� ã�� ��
		[](const String& s) {
			return s.getLen() == 5;
		});

	save("STL.cpp");
}

// �ҽ� �ڵ� �ϳ�, �о�� �� �ڷ� �ڵ� �ϳ��� ����(zip ���� �ٿ�ε�)
// ���� �ð� 70�� / ���۸� ���� / ���� ���� ��� ���� / 0�� ���� ����: ������ �����϶�� �� ����.
// ���� ����: ���� ����