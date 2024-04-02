//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 2�� ȭ����			(5�� 1��)
// 
// 4�� 25�� (8�� 1��) - �߰�����
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

class String {
	size_t len{};
	std::unique_ptr<char[]> p{};

public:
	String(const char* s) : len(strlen(s)) {
		p = std::make_unique<char[]>(len);
		memcpy(p.get(), s, len);
	}

	friend std::ostream& operator<<(std::ostream& os, const String& s) {
		for (size_t i = 0; i < s.len; ++i)
			os << s.p.get()[i];
		return os;
	}
};

//--------
int main()
//--------
{
	String s{ "STL ���θ� ���� Ŭ����" };
	String t = s;
	std::cout << s << std::endl;
	
	save("STL.cpp");
}
