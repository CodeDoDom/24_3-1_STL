#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Player {
	std::string name;
	int score;
	size_t num;
	std::unique_ptr<char[]> p;
	int* pointer{};

public:
	void write(std::ostream& os) {
		os.write((char*)this, sizeof(Player));
		os.write((char*)p.get(), num);
	}

	std::istream& read(std::istream& is) {
		delete[] pointer;
		is.read((char*)(this), sizeof(*this));
		pointer = new int[num];
		is.read((char*)pointer, sizeof(int) * num);
		return is;
	}
};

int main()
{
	std::string inFileName{ "2024 STL 과제 파일" };
	std::ifstream in{ inFileName, std::ios::binary };
	
	// 읽을 수 있는지 확인하는 코드
	/*
	if (not in) {
		std::cout << "파일 \"" << inFileName << "\"을 열 수 없습니다" << std::endl;
		return 0;
	}
	*/

	std::vector<Player> v;
	v.reserve(200'0000);

	Player pl;
	while (pl.read(in))
		v.push_back(pl);

	std::cout << "읽은 Player의 수 : " << v.size() << std::endl;

	return 0;
}
