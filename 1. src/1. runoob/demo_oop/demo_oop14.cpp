#include<iostream>

int main(int argc, char *argv[])
{
    int divisor, dividend, quotient, remainder;

    std::cout << " Input a dividend number: ";
    std::cin >> dividend;
    std::cout << " Input a divisor number: ";
    std::cin >> divisor;
    
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    std::cout << " quotient = " << quotient << std::endl;
    std::cout << " remainder = " << remainder<< std::endl;

    system("pause");
    return 0;
}