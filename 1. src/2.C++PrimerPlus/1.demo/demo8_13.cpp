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

// 定义全局结构体
struct job
{
    char name[40];
    double salary;
    int floor;
};

// 函数声明
template <typename T>
void Swap(T &a, T &b);

template <>
void Swap<job>(job &j1, job &j2);

void Show(job &j);

template void Swap<int>(int &, int &);

int main(int argc, char **argv)
{
    cout.precision(2);// 字符串显示位数
    cout.setf(ios::fixed, ios::floatfield);

    int i = 10, j = 20;
    cout << "i,j = " << i << " , " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout << "Now i,j = " << i << " , " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"sidney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue,sidney);
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <>
void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;

    t1        = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2       = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    cout << j.name << ":$" << j.salary
    << " on floor" << j.floor << endl;
}

