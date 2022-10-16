#include<iostream>

int main(int argc, char*argv[])
{
    std::cout << " char " << sizeof(char) << " bytes " << std::endl;
    std::cout << " int " << sizeof(int) << " bytes " << std::endl;
    std::cout << " float " << sizeof(float) << " bytes " << std::endl;
    std::cout << " double " << sizeof(double) << " bytes " << std::endl;

    system("pause");
    return 0;
}