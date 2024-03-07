//------------------------------------------------------------------------
// save.cpp		한 학기 강의를 저장한다.
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
	// fileName을 읽기용으로 연다.
	std::ifstream in{ fileName.data() };	// ifstream은 자료형		// RAII

	if (not in) {
		std::cout << fileName << " 열기 실패" << '\n';
		exit(0);
	}

	// 저장할 파일을 덧붙여 쓰기모드로 연다.
	std::ofstream out{ "2024 1학기 STL 화56목56 강의저장.txt", std::ios::app };

	// 읽을 파일의 내용을 읽어 쓸 파일에 덧붙인다.
	// STL 자료구조와 알고리즘을 이용하여 기록한다.(좋은 방식 아님)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	// 시간: 현재 time_point를 얻는다.
	auto now = std::chrono::system_clock::now();	// epoch으로 부터 흐른 tick
	auto utc = std::chrono::system_clock::to_time_t(now);
	auto lt = localtime(&utc);

	// 한국형식으로 출력 (출력스트림의 지역을 변환)
	auto old = out.imbue(std::locale("ko_KR"));

	out << '\n' << '\n';
	out << "================================================" << '\n';
	out << fileName << std::put_time(lt, ":, %x %A %X") << '\n';
	out << "================================================" << '\n';
	out << '\n';

	out.imbue(old);

	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}