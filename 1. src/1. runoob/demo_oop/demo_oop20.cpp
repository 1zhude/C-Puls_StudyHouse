#include<iostream>

int main(int argc, char *argv[])
{
    int n;
    
    std::cout << " Input a number: ";
    std::cin >> n;

    if (n % 2)
    {
        std::cout << "Ji number " << std::endl;
    }
    else
    {
        std::cout << "Ou number " << std::endl; 
    }

    system("pause");
    return 0;
}