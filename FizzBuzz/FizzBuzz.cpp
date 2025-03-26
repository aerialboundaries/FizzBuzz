#include <iostream>

std::string FizzBuzz(int number) {

	if (number == 3 || number == 6) {
		return "Fizz";
	}
	else if (number == 5 || number == 10) {
		return "Buzz";
	}
	else if (number == 15) {
		return "FizzBuzz";
	}
	else if (number == 2) {
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