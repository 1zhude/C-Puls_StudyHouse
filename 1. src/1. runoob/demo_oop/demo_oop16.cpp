#include<iostream>

#define SWAP(x,y)          x = x^y, y = x^y, x = x^y

int main(int argc, char *argv[])
{
    int a = 5, b = 10, temp;

    std::cout << " before " << std::endl;
    std::cout << " a = " << a << ", b = " << b << std::endl;
    SWAP(a,b);
    std::cout << " after " << std::endl;
    std::cout << " a = " << a << ", b = " << b << std::endl;

    system("pause");
    return 0;
}