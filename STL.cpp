//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 26�� ȭ����			(4�� 1��)
// 
// Free Store - RAII
// 
// C++ ���� ������� �ʵ��� �ǰ�
// - char*		-->		string
// - T[N]		-->		array<T,N>
// - T*(raw *)	-->		unique_ptr, shared_ptr(����Ʈ ������)
// 
// RAII - �޸�, FILE, jthread, mutex ��	(��Ʃ�꿡 C++ RAII �˻�)
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <numeric>
#include <thread>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

// [����] int num ���� �Է¹޾ƶ�.
// free store���� int�� num�� �Ҵ�޾ƶ�.
// int ���� '1���� �����ϴ� ������ ä����.' iota()
// int ���� '�հ�'�� ����϶�. 
// �� ������ ������ �ݺ��϶�.
// �ذ��ϴ� �ڵ带 ������ �����.

class Dog {
public:
	Dog() {
		std::cout << "����" << std::endl;
	}
	~Dog() {
		std::cout << "�Ҹ�" << std::endl;
	}
};

class ����Ʈ������ {
	Dog* p;
public:
	����Ʈ������(Dog* p) :p{ p } {}
	~����Ʈ������() {
		delete p;
	}
};

void f()
{
	std::cout << "f ����" << std::endl;
	����Ʈ������ p(new Dog);

	throw 1234;

	std::cout << "f ��" << std::endl;
}

//--------
int main()
//--------
{
	std::cout << "main ����" << std::endl;
	
	try {
		f();
	}
	catch (...) {			// ... elipses
		std::cout << "���ܸ� �޾Ҿ��." << std::endl;
	}
	
	std::cout << "main ��" << std::endl;

	save("STL.cpp");
}
