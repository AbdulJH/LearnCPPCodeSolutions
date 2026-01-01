#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: ";
    int userInput{};
    std::cin >> userInput;
    return userInput;
}

void writeAnswer(int answer)
{
    std::cout << "The answer is " << answer << '\n';

}



int main()
{
    int firstNum{ readNumber() };
    int secondNum{ readNumber() };

    writeAnswer(firstNum + secondNum);



    return 0;
    
}

