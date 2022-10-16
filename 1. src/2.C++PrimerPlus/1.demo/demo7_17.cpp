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
// 常量声明
const int Len  = 66;
const int Divs = 6;
// 函数声明
void subdivide(char ar[], int low, int high, int level);
// 进入主函数
int main(int argc, char **argv)
{
    char ruler[Len];
    int i;

    for (i = 0; i < Len - 2; i++)
    {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;

    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;

    for (i = 0; i <= Divs; i++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        // 清空字符数组缓冲区
        for (int j = 1; j < Len - 2; j++)
        {
            ruler[j] = ' ';
        }
    }
    return 0;
}

void subdivide(char ar[], int low, int high, int level)
{   
    if (level == 0)
    {
        return ;
    }
    int mid = (high + low)/2;
    ar[mid] = '|';
    subdivide(ar, low,  mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}