//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 23일 화요일			(8주 1일)
// 
// 4월 25일 (8주 2일) - 중간시험
// 
// list
// 
// (책 <모두의 C++> 참고)
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <fstream>
#include <algorithm>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	std::list<String> cont;

	std::ifstream in{ "String.cpp" };
	if (not in)
		return 0;

	cont = { std::istream_iterator<String>{in}, {} };

	// cont를 길이오름차순으로 정렬하라.
	cont.sort([](const String& a, const String& b) {
		return a.getLen() < b.getLen();
		});

	// [문제] cont에서 길이가 5인 원소만 화면에 출력하라.
	copy_if(cont.begin(), cont.end(), std::ostream_iterator<String>{std::cout, "\n"},	// 얘도 빵점 답, 전체 데이터를 하나씩 훑어가며 찾는 것
		[](const String& s) {
			return s.getLen() == 5;
		});

	save("STL.cpp");
}

// 소스 코드 하나, 읽어야 할 자료 코드 하나씩 제공(zip 파일 다운로드)
// 시험 시간 70분 / 구글링 가능 / 시험 도중 퇴실 가능 / 0점 방지 문제: 데이터 생성하라고 할 것임.
// 주의 사항: 컨닝 주의