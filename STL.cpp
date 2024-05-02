//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      5�� 2�� �����			(9�� 2��)
// 
// �ݺ���: iterator - �ݺ��ڴ� �����͸� �Ϲ�ȭ�� ���̴�.
//  
// Iterators are a generalization of pointers 
// that allow a C++ program to work with different data structures
// in a uniform manner.
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

template<class �ݺ���>
void f(�ݺ��� iter)
{
	std::cout << typeid(�ݺ���::iterator_category).name() << std::endl;
}

//--------
int main()
//--------
{
	// Ŭ���� String�� contiguous �޸𸮸� �����Ѵ�.
	// ���� �ڵ尡 ����ǰ� �϶�.

	String s{ "0123456789" };

	//for (char s : s)				// begin, end�� �����ؾ� ��.
	//	std::cout << s << ' ';
	//std::cout << std::endl;

	save("STL.cpp");
}
