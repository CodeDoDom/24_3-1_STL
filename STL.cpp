//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 12�� ȭ����			(2�� 1��)
// 
// ���� ���� �����͸� ó���� �� �־��...
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <algorithm>
#include "save.h"
//using namespace std;	// ������� �ʰ� �ڵ�

// [����] "int����.txt"���� �� ������ �𸣴� int ���� �ִ�.
// ���� ���� ū ���� ã�� ȭ�鿡 ����϶�.

//--------
int main()
//--------
{
	std::ifstream in{ "int����.txt" };
	if (not in)
		exit(0);

	std::cout << *std::max_element(std::istream_iterator<int>{in}, {}) << std::endl;

	save("STL.cpp");
}
