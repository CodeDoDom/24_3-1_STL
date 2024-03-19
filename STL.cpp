//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 19�� ȭ����			(3�� 1��)
// 
// FILE I/O text/binary - high/low level
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <array>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

// [����] "����"���� class Dog ��ü 100���� ��ϵǾ� �ִ�.
// ������ binary ����̰�, write �Լ��� ��� ��ü�� �� ���� write()�� ����Ͽ���.
// ������ �о� ���� num ���� ū Dog ������ ȭ�鿡 ����϶�.
// class Dog�� ����� ������ ����.

class Dog {
	char c;
	int num;

public:	// ����� �Լ�(����/�Ҹ�) -> ���۷�����() -> Show() ��� -> friend()
	int getNum() const {
		return num;
	}

	void Show() const {
		std::cout << "Dog, c-" << c << ", num-" << num << std::endl;
	}

	friend std::istream& operator>>(std::istream& is, Dog& dog) {
		return is.read((char*)&dog, sizeof(Dog));
	}
};

//--------
int main()
//--------
{
	std::ifstream in{ "����", std::ios::binary };

	if (not in) {
		std::cout << "������ �� �� ����" << std::endl;
		return 0;
	}
	
	std::array<Dog, 100> dogs;
	in.read(reinterpret_cast<char*>(dogs.data()), sizeof(Dog)*100);

	auto pos = std::max_element(dogs.begin(), dogs.end(), [](const Dog& a, const Dog& b) {
		return a.getNum() < b.getNum();
		});

	std::cout << "num ���� ���� ū Dog" << std::endl;
	pos->Show();	// (*pos).Show()�� �Ȱ�����, �̷��� ���� �ȵ�.
	// Dog, c-y, num-9929

	save("STL.cpp");
}
