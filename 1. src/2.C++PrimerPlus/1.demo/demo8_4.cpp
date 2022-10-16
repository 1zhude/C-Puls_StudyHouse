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

// 函数声明
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
int main(int argc, char **argv)
{
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using reference to swap content:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using point to swap content:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;  

    cout << "Trying to using passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;  

    return 0;
}


void swapr(int & a, int & b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int * p, int * q)
{
    int temp;

    temp =  *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)
{
    int temp;

    temp =  a;
    a = b;
    b = temp;
}