#include<iostream>
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

const int ArSize = 16;// 定义符号常量

int main(int argc, char **argv)
{
    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;// 0和1的阶乘都是1

    for (size_t i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];// 计算ArSize的阶乘
    }
    
    for (size_t i = 0; i < ArSize; i++)// 显示阶乘数
    {
        cout << i << "!= " << factorials[i] << endl;
    }

    system("pause");
    return 0;
}