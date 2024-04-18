//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 18�� �����			(7�� 2��)
// 
// 4�� 25�� (8�� 2��) - �߰�����
// 
// STL container - Sequence - deque(��)
// �� -> ���Ϳ� ����Ʈ�� �߰�
// 
// push_back, push_front -> O(1) �˰���
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

class Test {
	char x[4'096];
};

//--------
int main()
//--------
{
	//std::vector<Test> v;		// 3543306

	//std::deque<Test> v;		// 58xxxxx

	std::list<Test> v;			// deque���� ���� �� ũ�� ���� ��(�Ƹ�)

	size_t cnt{};

	while (true){
		try {
			v.emplace_back();
			++cnt;
		}
		catch (...) {
			std::cout << "�ִ� ���� - " << v.size() << std::endl;
			return 0;
		}
		if (cnt % 10'0000 == 0)
			std::cout << cnt << std::endl;
	}
	
	save("STL.cpp");
}
