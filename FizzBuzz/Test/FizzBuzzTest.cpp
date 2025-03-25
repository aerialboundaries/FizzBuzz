#include <gtest/gtest.h>
#include <gmock/gmock.h>

extern std::string FizzBuzz(int number);

TEST(FizzBuzzTest, return1_with_arg_1) {
	std::string result = FizzBuzz(1);
	EXPECT_EQ("1", result);
}

TEST(FizzBuzzTest, returnFizz_with_arg_3) {
	std::string result = FizzBuzz(3);
	EXPECT_EQ("Fizz", result);
}

TEST(FizzBuzzTest, returnBuzz_with_arg_5) {
	std::string result = FizzBuzz(5);
	EXPECT_EQ("Buzz", result);
}

TEST(FizzBuzzTest, returnFizzBuzz_with_arg_15) {
	std::string result = FizzBuzz(15);
	EXPECT_EQ("FizzBuzz", result);
}

TEST(FizzBuzzTest, return_2_with_arg_2) {
	std::string result = FizzBuzz(2);
	EXPECT_EQ("2", result);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}