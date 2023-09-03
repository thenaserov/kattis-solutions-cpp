#include <iostream>

int main() {
	int input{};
	std::cin >> input;
	if (input % 2 == 0) {
		std::cout << "second" << std::endl;
	}
	else {
		std::cout << "first" << std::endl;
	}
	return 0;
}
