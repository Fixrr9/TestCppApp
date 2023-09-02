#include <iostream>

int main(){

	char* inputString = {};

	std::cout << "Type something: ";
	
	std::cin >> inputString;
	
	std::cout << "Typed: " << inputString;
	
	
	std::cout << std::endl << "Press any key to continue...";
	std::cin >> inputString;


	return 0;
}