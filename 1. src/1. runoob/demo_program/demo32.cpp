#include<iostream>

int main(int argc, char *argv[])
{
    int i;
    double d;

    int& r = i;// r为一个初始值为i的整型引用
    double& s = d;// s为一个初始值为d的double型引用

    i = 5;
    std::cout << "i = : " << i << std::endl;
    std::cout << "r = : " << r << std::endl;

    d = 11.8;
    std::cout << "d = : " << d << std::endl;
    std::cout << "s = : " << s << std::endl;

    system("pause");
    return 0;    
}