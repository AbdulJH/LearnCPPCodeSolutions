#include <iostream>

// Write a short program where the user is asked to enter a single character. 
// Print the value of the character and its ASCII code, using static_cast.
// The program’s output should match the following :




int main()
{
	std::cout << "Enter a single character: ";
	char userInput{};
	std::cin >> userInput;
	int asciNum = userInput;

	std::cout << "You entered " << "'" << userInput << "', which has ASCII CODE " << static_cast<int>(userInput);
	std::cout << "You entered " << "'" << userInput << "', which has ASCII CODE " << asciNum;







	return 0;
}