#include "pch.h"

#include <iostream>
#include <string>

char chars[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main() {
	std::cout << "Enter the amount of characters you would like your nonsense word to have: \n";

	int charLength;
	std::cin >> charLength;

	std::cout << "Would you like your nonsense word to contain numbers? (\'1\' = yes / \'0\' = no) \n";

	bool useNumbers;
	std::cin >> useNumbers;

	int arrayLen = useNumbers ? 36 : 26;

	std::string nonsenseWord = "";

	for (int i = 0; i < charLength; i++) {
		char c = chars[rand() % arrayLen];
		nonsenseWord += c;
	}

	std::cout << "Your nonsense word is: " << nonsenseWord << "\n";
	system("PAUSE");
	return 0;
}
