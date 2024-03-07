//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 7�� ȭ����			(1�� 2��)
// 
// ���� ���� �����͸� ó���� �� �־��...
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

class Dog;					// forward declaration
void change(int&, int&);
void change(Dog&, Dog&);

// [����] main()�� �������� ����, �ǵ���� ����ǵ��� change()�� �����ϰ� �����϶�.
// ��� ������ �����ε�...........?
class Dog {
public:
	Dog(int n) : num(n) {}
	// Dog(const Dog&) {};	// ���� ������ �ʿ� ����. 
	// ���� - �� �Լ��� special function��. special function�� �ʿ��ϸ� �����Ϸ��� �ڵ����� ����. �� ������ �ʿ� x
	//operator int() { return num; }	// �̰� ����?
	friend std::ostream& operator<<(std::ostream& os, const Dog& dog) {
		return os << dog.num;
	}

private:
	int num;
};

//--------
int main()
//--------
{
	Dog a{ 1 }, b{ 2 };	// { : ������ �̴ϼȶ�����

	change(a, b);

	std::cout << a << ", " << b << '\n';	// ���� ���: 2, 1

	save("STL.cpp");
}

void change(int& a, int& b)
{
	int tmp{ a };
	a = b;
	b = tmp;
}

void change(Dog& a, Dog& b)
{
	Dog tmp{ a };		// copy construction	���� ����
	a = b;
	b = tmp;
}