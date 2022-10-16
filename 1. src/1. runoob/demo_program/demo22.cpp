#include<iostream>

int main(int argc, char *argv[])
{
    int a = 100;
    int b = 400;

    if(a == 100)
    {
        if(b < 300)
        {
            std::cout << "b < 300\n";
        }
        else
        {
            std::cout << "b >= 300\n";
        }
    }

    std::cout << "b = " << b << std::endl;

    system("pause");
    return 0;
}