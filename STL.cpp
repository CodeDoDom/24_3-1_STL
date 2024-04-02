//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 2일 화요일			(5주 1일)
// 
// 4월 25일 (8주 1일) - 중간시험
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

class String {
	size_t len{};
	std::unique_ptr<char[]> p{};

public:
	String(const char* s) : len(strlen(s)) {
		p = std::make_unique<char[]>(len);
		memcpy(p.get(), s, len);
	}

	friend std::ostream& operator<<(std::ostream& os, const String& s) {
		for (size_t i = 0; i < s.len; ++i)
			os << s.p.get()[i];
		return os;
	}
};

//--------
int main()
//--------
{
	String s{ "STL 공부를 위한 클래스" };
	String t = s;
	std::cout << s << std::endl;
	
	save("STL.cpp");
}
