//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      4�� 9�� ȭ����			(6�� 1��)
// 
// 4�� 25�� (8�� 1��) - �߰�����
// 
// STL Container - Containers are objects that store other objects.
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <fstream>
#include "save.h"
#include "String.h"
//using namespace std;	// ������� �ʰ� �ڵ�

extern bool ����;

//--------
int main()
//--------
{
	std::array<String, 50> a;

	// [����] "STL.cpp"�� �ܾ a�� �����϶�.
	// ���� ������������ a�� �����϶�.
	// ȭ�鿡 ����϶�.

	std::ifstream in{ "STL.cpp" };

	for (int i = 0; i < 50; ++i)
		in >> a[i];		// in >> std::string �� �̿��ؼ� ����

	save("STL.cpp");
}
