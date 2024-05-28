//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 23�� �����			(12�� 2��)
// 
// Unordered Assoiative Container - unordered_set / unordered_map
// - ������ ����.
// - �޸𸮸� ��� ����Ͽ� ���⵵�� 0(1)�ΰ�
// - ���� ���� String�� �����Ϸ��� ��� �ؾ� �Ǵ°�.
//  
// 6��  6�� ��(������): ���� ����
// 6�� 13�� ��(15�� 2��): �⸻ ����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <unordered_set>
#include <print>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

void print_us(const std::unordered_multiset<int>& us)
{
	std::cout << "������� ��Ƽ���� �޸� ����" << std::endl;

	for (int i = 0; i < us.bucket_count(); ++i) {
		std::print("[{:3}]", i);
		for (auto p = us.begin(i); p != us.end(i); ++p) {
			std::cout << ": " << *p;
		}
		std::cout << std::endl;
	}

}

//--------
int main()
//--------
{
	save("STL.cpp");

	std::unordered_multiset<int> us{ 3,1,2,4,10 };

	while (true) {
		std::cout << "�߰��� ����? ";
		int num;
		std::cin >> num;
		us.insert(num);

		print_us(us);

		std::cout << std::endl;
	}
}
