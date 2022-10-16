#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>

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
    int a,b;// 定义变量a、b
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The large of " << a << " and " << b;
    int c = a > b ? a : b;// 将a、b的较大的值赋给变量c
    cout << " is " << c  << endl;
   
    return 0;
}

