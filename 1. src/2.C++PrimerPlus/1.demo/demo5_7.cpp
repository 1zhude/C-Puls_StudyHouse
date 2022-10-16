#include<iostream>
#include<string>
#include <vector>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;

int main(int argc, char **argv)
{
    int a = 20;
    int b = 20;

    cout <<"a = " << a << ": b = " << b << "\n";
    cout <<"a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout <<"a = " << a << ": b = " << b << "\n";

    //system("pause");
    return 0;
}