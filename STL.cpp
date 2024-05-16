//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 16�� �����			(11�� 2��)
// 
// Assoiative Container - set / map
// 
// - equivalence(���, <) / equality(��, ==)
// 
// - default ���ı����� operator<
// - �Լ���ü
// - less<Strings> specialization
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
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
	save("STL.cpp");
	
	std::ifstream in{ "�̻��� ������ �ٸ���.txt" };
	if (not in)
		return 0;

	std::multiset<String> s{ std::istream_iterator<String>{in},{} };
	std::cout << "�ٸ������� ����� �ܾ� ����: " << s.size() << std::endl;

	// [����] ����ڰ� �Է��� ���ڸ� �����ϴ� ��� �ܾ ����϶�.

	while (true) {
		std::cout << "ã�� �ܾ��? ";
		String word;
		std::cin >> word;

		auto cnt = s.count(word);

		if (cnt)
			std::cout << word << "�� " << cnt << "�� ����߽��ϴ�." << std::endl;
		else
			std::cout << word << "�� ������� �ʾҽ��ϴ�." << std::endl;
	}
}
