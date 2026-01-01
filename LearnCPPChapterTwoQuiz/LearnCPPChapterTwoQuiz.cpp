#include <iostream>
#include "MYIO.H"



int main()
{
    int firstNum{ readNumber() };
    int secondNum{ readNumber() };

    writeAnswer(firstNum + secondNum);


    return 0;
    
}

