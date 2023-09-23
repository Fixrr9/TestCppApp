#include <iostream>

int main(){

	try{
		std::string inputString{};

		std::cout << "Type something: ";
		
		std::cin >> inputString;
		
		std::cout << "Typed: " << inputString;
		
	}
	catch (int mynum) {
		
	};
	
	return 0;
}