//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 21�� �����			(3�� 2��)
// 
// ���������� �޸� ���� - ã�ƺ�����: STACK CODE DATA Free Store
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

int a[1'000'000]{ 1 };

//--------
int main()
//--------
{
	std::cout << a[0] << std::endl;
	std::cout << a[999'999] << std::endl;

	save("STL.cpp");
}
