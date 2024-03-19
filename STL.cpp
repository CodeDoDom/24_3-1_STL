//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 19일 화요일			(3주 1일)
// 
// 실행파일의 메모리 구조 - 찾아보세요: STACK CODE DATA Free Store
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

// [문제] "개들"에는 class Dog 객체 100개가 기록되어 있다.
// 파일은 binary 모드이고, write 함수로 모든 객체를 한 번의 write()로 기록하였다.
// 파일을 읽어 num 값이 1'0000 미만인 Dog 객체는 몇 개인지 화면에 출력하라.
// class Dog의 멤버는 다음과 같다.

class Dog {
	char c;
	int num;

public:	// 스페셜 함수(생성/소멸) -> 오퍼레이터() -> Show() 등등 -> friend()
	int getNum() const {
		return num;
	}

	void Show() const {
		std::cout << "Dog, c-" << c << ", num-" << num << std::endl;
	}

	friend std::istream& operator>>(std::istream& is, Dog& dog) {
		return is.read((char*)&dog, sizeof(Dog));
	}
};

//--------
int main()
//--------
{
	std::ifstream in{ "개들", std::ios::binary };

	if (not in) {
		std::cout << "파일을 열 수 없음" << std::endl;
		return 0;
	}
	
	std::array<Dog, 100> dogs;
	in.read((char*)(dogs.data()), sizeof(Dog)*100);

	int num = std::count_if(dogs.begin(), dogs.end(), [](const Dog& dog) {
		if (1'0000 > dog.getNum())
			return true;
		return false;
		});

	std::cout << "개수: " << num << std::endl;

	save("STL.cpp");
}
