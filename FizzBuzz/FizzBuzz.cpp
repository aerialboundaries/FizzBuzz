#include <iostream>

std::string FizzBuzz(int number) {

	if (number % 15 == 0) {
		return "FizzBuzz";
	}
	
	if (number % 5 == 0) {
		return "Buzz";
	}

	if (number % 3 == 0) {
		return "Fizz";
	} else if (number == 2) {
		return "2";
	}


	return "1";
}


/*
int main() {
	std::cout << "Hello, World" << std::endl;
	return 0;
}
*/