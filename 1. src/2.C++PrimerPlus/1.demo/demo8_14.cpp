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

// 全局结构体
struct debts
{
    char name[40];
    double amount;
};

template <typename T> void ShowArray(T arr[], int n);
// template <typename T> void ShowArray(T * arr[], int n);

// 主函数
int main(int argc, char **argv)
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe" , 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];

    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    
    cout << "Listing Mr.E's counts of things:\n";
    ShowArray(things, 6);
    cout << "Listing Mr.E's debts:\n";
    ShowArray(pd, 3);

    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "template A\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// template <typename T>
// void ShowArray(T * arr[], int n)
// {
//     cout << "template B\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << *arr[i] << ' ';
//     }
//     cout << endl;
// }