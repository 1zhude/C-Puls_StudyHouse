#include<iostream>

int main(int argc, char *argv[])
{
    int var = 20;
    int *ip;

    ip = &var;

    std::cout << "Value of var variable: ";
    std::cout << var << std::endl;

    std::cout << "Address stored in ip variable: ";
    std::cout << ip << std::endl;
    
    std::cout << "Value of *ip variable: ";
    std::cout << *ip << std::endl;

    system("pause");
    return 0;
}
