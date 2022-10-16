#include<iostream>
#include<iomanip>

int main(int argc, char *argv[])
{
    int n[10];
    for (size_t i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }
    std::cout << "Element" << std::setw(13) << "value" << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << std::setw(4) << i << std::setw(15) << n[i] << std::endl;
    } 

    system("pause");
    return 0;
}
