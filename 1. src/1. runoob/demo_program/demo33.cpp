#include<iostream>
void swap(int& x, int& y);

int main(int argc, char *argv[])
{
    int a = 100;
    int b = 200;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;  
   
    system("pause");   
    return 0;
}

void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}