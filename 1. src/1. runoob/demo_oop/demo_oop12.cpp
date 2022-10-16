#include<iostream>

int main(int argc, char *argv[])
{
    int firstNumber,secondNumber,sumNumbers;

    std::cout << "Please input two number :" << std::endl;
    std::cin >> firstNumber >> secondNumber;
    sumNumbers = firstNumber + secondNumber;
    std::cout << firstNumber << " + " << secondNumber << " = " << sumNumbers << std::endl;

    system("pause");
    return 0;
}