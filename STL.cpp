//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 9�� �����			(10�� 2��)
// 
// �ݺ���: iterator - �ݺ��ڴ� �����͸� �Ϲ�ȭ�� ���̴�.
//  
// 6�� 6�� ��(������): ���� ����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

template <class �ݺ���, class ȣ�Ⱑ��Ÿ��>
�ݺ��� my_find(�ݺ��� b, �ݺ��� e, ȣ�Ⱑ��Ÿ�� f)
{

}

//--------
int main()
//--------
{
	String s{ "1357924680" };
	
	// [����] ���� �ڵ尡 �������� ����ǵ��� ����.
	// �� �ڵ�� [begin(), end())���� �־��� ���ǿ� �´� ������ ��ġ�� �����Ѵ�.

	auto p = my_find(s.begin(), s.end(), [](char c) {
		if (std::stoi(c) % 2 == 0)
			return true;
		return false;
		});

	std::cout << "ó�� ã�� ¦���� ��ġ�� " << std::endl;
	std::cout << "ó�� ã�� ¦���� ���� " << std::endl;

	save("STL.cpp");
}
