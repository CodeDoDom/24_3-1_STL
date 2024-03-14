//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 14일 목요일			(2주 2일)
// 
// FILE I/O text/binary - high/low level
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <array>
#include <random>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

// [문제] "개들"에는 class Dog 객체 100개가 기록되어있따.
// 파일은 binary 모드이고, write 함수로 sizeof(Dog)*100 바이트를 기록하였다.
// 파일을 읽어 가장 num 값이 큰 Dog 정보를 화면에 출력하라.
// class Dog의 멤버는 다음과 같다.

class Dog {
	char c;
	int num;
};

std::default_random_engine dre;
std::uniform_int_distribution<int> uidC{ 'a','z' };
std::uniform_int_distribution uidNum{ -9999, +9999 };

class Dog {
	char c{ static_cast<char>(uidC(dre)) };
	int num{ uidNum(dre) };
public:
	friend std::ostream& operator<<(std::ostream& os, const Dog& dog) {
		return os << "글자: " << dog.c << ", 숫자: " << dog.num;
	}
};

//--------
int main()
//--------
{
	std::array<Dog, 100> dogs;

	for (const Dog& dog : dogs)
		std::cout << dog << std::endl;

	//
	std::ofstream out{ "개들", std::ios::binary };
	out.write((char*)dogs.data(), sizeof(Dog) * dogs.size());

	//save("STL.cpp");
}
