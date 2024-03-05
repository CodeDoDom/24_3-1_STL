//------------------------------------------------------------------------
// 2024.	1�б� STL ȭ56��56      3�� 5�� ȭ����			(1�� 1��)
// 
// VisualStudio 17.9 �̻�, Release x64
// ������Ʈ �Ӽ� - ��� /std:c++latest
// �ܼ�â ũ�� 80x25
// 
// ���б� ���Ǹ� ������ save �Լ� �ۼ��ϰ� ���� �и�
//------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
//using namespace std;	// ������� �ʰ� �ڵ�

void save(std::string_view);

int main()
{
	std::cout << "2024 STL" << std::endl;
	save("STL.cpp");
}

void save(std::string_view fileName)
{
	// fileName�� �б������ ����.
	std::ifstream in{ fileName.data() };	// ifstream�� �ڷ���		// RAII

	//std::cout << sizeof in << std::endl;
	//std::cout << addressof(in) << std::endl;
	//std::cout << typeid(in).name() << std::endl;

	if (not in) {
		std::cout << fileName << " ���� ����" << std::endl;
		exit(0);
	}

	// ������ ������ ���ٿ� ������� ����.
	std::ofstream out{ "2024 1�б� STL ȭ56��56 ��������.txt", std::ios::app };


	// ���� ������ ������ �о� �� ���Ͽ� �����δ�.
	// STL �ڷᱸ���� �˰������� �̿��Ͽ� ����Ѵ�.(���� ��� �ƴ�)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	//for (char c : v)
	//	std::cout << c;

	out << std::endl << std::endl;
	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}