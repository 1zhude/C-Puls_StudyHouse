// 头文件声明
#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>
#include<fstream>
#include<cstdlib>
#include<cmath>
// 名称空间声明
using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;
using std::ofstream;
using std::ifstream;
using std::fixed;

// 定义内联函数
inline double square(double x) { return x * x;}
// 函数声明
int main(int argc, char **argv)
{
    double a,b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);

    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c square = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";

    return 0;
}

