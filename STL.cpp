//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 7일 화요일			(1주 2일)
// 
// 많은 수의 데이터를 처리할 수 있어야...
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "save.h"
//using namespace std;	// 사용하지 않고 코딩

class Dog;					// forward declaration
void change(int&, int&);
void change(Dog&, Dog&);

// [문제] main()을 변경하지 말고, 의도대로 실행되도록 change()를 선언하고 정의하라.
// 출력 연산자 오버로딩...........?
class Dog {
public:
	Dog(int n) : num(n) {}
	// Dog(const Dog&) {};	// 복사 생성할 필요 없음. 
	// 이유 - 이 함수는 special function임. special function은 필요하면 컴파일러가 자동으로 생성. 즉 생성할 필요 x
	//operator int() { return num; }	// 이거 뭐지?
	friend std::ostream& operator<<(std::ostream& os, const Dog& dog) {
		return os << dog.num;
	}

private:
	int num;
};

//--------
int main()
//--------
{
	Dog a{ 1 }, b{ 2 };	// { : 유니폼 이니셜라이져

	change(a, b);

	std::cout << a << ", " << b << '\n';	// 실행 결과: 2, 1

	save("STL.cpp");
}

void change(int& a, int& b)
{
	int tmp{ a };
	a = b;
	b = tmp;
}

void change(Dog& a, Dog& b)
{
	Dog tmp{ a };		// copy construction	복사 생성
	a = b;
	b = tmp;
}