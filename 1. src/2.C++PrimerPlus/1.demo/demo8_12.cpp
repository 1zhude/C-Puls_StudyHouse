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

const int Lim = 8;

template<typename T>
void Swap(T &a, T &b);

template<typename T>
void Swap(T x[], T y[], int n);

void show(int a[]);

int main(int argc, char **argv)
{
    int i = 10;
    int j = 20;

    cout << "i, j = " << i << " , " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,7,2,0,1,9,6,9};

    cout << "Original arrays:\n";
    show(d1);
    show(d2);
    Swap(d1, d2, Lim);
    cout << "Swapped arrays:\n";
    show(d1);
    show(d2);

    return 0;
}

// 函数1定义
template<typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 函数2定义
template<typename T>
void Swap(T x[], T y[], int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {     
        temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    } 
}

void show(int a[])
{
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++)
    {
        cout << a[i];
    }
    cout << endl;
}