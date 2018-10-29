#include <iostream>
#include <string>
#define Pause std::cin.ignore();std::cin.get();

int main() {
	std::string str;
	std::cin >> str;
	std::cout << str << std::endl;
	Pause;

	return 0;
}