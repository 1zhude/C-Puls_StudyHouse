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
#include<cstdlib>
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
using std::ios;
using std::ostream;

template<typename T>
void Swap(T &a, T &b);
int main(int argc, char **argv)
{
    int i = 10;
    int j = 20;

    cout << "i, j = " << i << " , " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;

    cout << "x, y = " << x << " , " << y << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(x,y);
    cout << "Now x, y = " << x << ", " << y << ".\n";

    return 0;
}

// 函数定义
template<typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}