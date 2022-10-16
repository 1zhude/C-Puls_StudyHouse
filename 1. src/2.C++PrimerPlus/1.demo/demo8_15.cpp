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

// 函数"#1"
template<typename T> T lesser(T a, T b)
{
    return a < b ? a : b;
}
// 函数"#2"
int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    return a > b ? a : b;
}

// 主函数
int main(int argc, char **argv)
{
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m,n) << endl;// "#1"
    cout << lesser(x,y) << endl;// "#2"
    cout << lesser<>(m,n) << endl;// "#1"
    cout << lesser<int>(x,y) << endl;// "#1"

    return 0;
}

