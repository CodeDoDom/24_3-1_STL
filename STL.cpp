//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 26일 화요일			(4주 1일)
// 
// Free Store - RAII
// 
// C++ 언어에서 사용하지 않도록 권고
// - char*		-->		string
// - T[N]		-->		array<T,N>
// - T*(raw *)	-->		unique_ptr, shared_ptr(스마트 포인터)
// 
// RAII - 메모리, FILE, jthread, mutex 등	(유튜브에 C++ RAII 검색)
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <numeric>
#include <thread>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

// [문제] int num 값을 입력받아라.
// free store에서 int를 num개 할당받아라.
// int 값을 '1부터 시작하는 정수로 채워라.' iota()
// int 값의 '합계'를 출력하라. 
// 이 과정을 영원히 반복하라.
// 해결하는 코드를 답지에 적어라.

class Dog {
public:
	Dog() {
		std::cout << "생성" << std::endl;
	}
	~Dog() {
		std::cout << "소멸" << std::endl;
	}
};

class 스마트포인터 {
	Dog* p;
public:
	스마트포인터(Dog* p) :p{ p } {}
	~스마트포인터() {
		delete p;
	}
};

void f()
{
	std::cout << "f 시작" << std::endl;
	스마트포인터 p(new Dog);

	throw 1234;

	std::cout << "f 끝" << std::endl;
}

//--------
int main()
//--------
{
	std::cout << "main 시작" << std::endl;
	
	try {
		f();
	}
	catch (...) {			// ... elipses
		std::cout << "예외를 받았어요." << std::endl;
	}
	
	std::cout << "main 끝" << std::endl;

	save("STL.cpp");
}
