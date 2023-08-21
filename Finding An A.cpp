#include <iostream>

int main() {
	std::string input{};
	std::string output{};
	std::cin >> input;
	for (int i{ 0 }; i < input.size(); i++) {
		if (input[i] == 'a') {
			for (int j{ i }; j < input.size(); j++) {
				output.push_back(input[j]);
			}
			break;
		}
	}
	std::cout << output << std::endl;
	return 0;
}