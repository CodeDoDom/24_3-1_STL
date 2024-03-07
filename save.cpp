//------------------------------------------------------------------------
// save.cpp		�� �б� ���Ǹ� �����Ѵ�.
// 
// 2024. 3. 7
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <string_view>
#include <fstream>
#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include "save.h"

//----------------------------------
void save(std::string_view fileName)
//----------------------------------
{
	// fileName�� �б������ ����.
	std::ifstream in{ fileName.data() };	// ifstream�� �ڷ���		// RAII

	if (not in) {
		std::cout << fileName << " ���� ����" << '\n';
		exit(0);
	}

	// ������ ������ ���ٿ� ������� ����.
	std::ofstream out{ "2024 1�б� STL ȭ56��56 ��������.txt", std::ios::app };

	// ���� ������ ������ �о� �� ���Ͽ� �����δ�.
	// STL �ڷᱸ���� �˰����� �̿��Ͽ� ����Ѵ�.(���� ��� �ƴ�)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// �ð�: ���� time_point�� ��´�.
	auto now = std::chrono::system_clock::now();	// epoch���� ���� �帥 tick
	auto utc = std::chrono::system_clock::to_time_t(now);
	auto lt = localtime(&utc);

	// �ѱ��������� ��� (��½�Ʈ���� ������ ��ȯ)
	auto old = out.imbue(std::locale("ko_KR"));

	out << '\n' << '\n';
	out << "================================================" << '\n';
	out << fileName << std::put_time(lt, ":, %x %A %X") << '\n';
	out << "================================================" << '\n';
	out << '\n';

	out.imbue(old);

	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}