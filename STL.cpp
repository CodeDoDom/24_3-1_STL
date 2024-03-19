//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 19�� ȭ����			(3�� 1��)
// 
// ���������� �޸� ���� - ã�ƺ�����: STACK CODE DATA Free Store
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

// [����] "����"���� class Dog ��ü 100���� ��ϵǾ� �ִ�.
// ������ binary ����̰�, write �Լ��� ��� ��ü�� �� ���� write()�� ����Ͽ���.
// ������ �о� num ���� 1'0000 �̸��� Dog ��ü�� �� ������ ȭ�鿡 ����϶�.
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
	in.read((char*)(dogs.data()), sizeof(Dog)*100);

	int num = std::count_if(dogs.begin(), dogs.end(), [](const Dog& dog) {
		if (1'0000 > dog.getNum())
			return true;
		return false;
		});

	std::cout << "����: " << num << std::endl;

	save("STL.cpp");
}
