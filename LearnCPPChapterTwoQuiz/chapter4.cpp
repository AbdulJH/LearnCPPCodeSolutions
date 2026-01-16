#include <iostream>

// Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
// The program computes the answer on the two numbers the user entered and prints the results. 
// If the user enters an invalid symbol, the program should print nothing.


double add(double num1, double num2) {
	return num1 + num2;
}

double subtract(double num1, double num2) {
	return num1 - num2;
}

double multiply(double num1, double num2) {
	return num1 * num2;
}

double divide(double num1, double num2) {
	return num1 / num2;
}


void checkResult(char userSymbol, double userNumOne, double userNumTwo) {
	if (userSymbol == '+') {
		std::cout << userNumOne << " + " << userNumTwo << " is " << add(userNumOne, userNumTwo);
	}
	else if (userSymbol == '-') {
		std::cout << userNumOne << " - " << userNumTwo << " is " << subtract(userNumOne, userNumTwo);
	}
	else if (userSymbol == '*') {
		std::cout << userNumOne << " * " << userNumTwo << " is " << multiply(userNumOne, userNumTwo);
	}
	else if (userSymbol == '/') {
		std::cout << userNumOne << " / " << userNumTwo << " is " << divide(userNumOne, userNumTwo);
	}
	else {
		std::cout << " ";
	}

}




int main()
{
	std::cout << "Enter a double value: ";
	double userNumOne{};
	std::cin >> userNumOne;

	std::cout << "Enter a double value: ";
	double userNumTwo{};
	std::cin >> userNumTwo;

	std::cout << "Enter +, -, *, or /: ";
	char userSymbol{};
	std::cin >> userSymbol;

	checkResult(userSymbol, userNumOne, userNumTwo);


	return 0;
}