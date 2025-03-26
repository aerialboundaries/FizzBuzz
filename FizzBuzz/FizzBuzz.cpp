#include <iostream>
#include <string>

std::string FizzBuzz(int number) {

	if (number % 15 == 0) {
		return "FizzBuzz";
	}
	
	if (number % 5 == 0) {
		return "Buzz";
	}

	if (number % 3 == 0) {
		return "Fizz";
	}


	return std::to_string(number);
}


int main() {
	for (int i = 1; i <= 100; i++) {
		std::cout << FizzBuzz(i) << std::endl;
	}
	return 0;
}