#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
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


int main(int argc, char **argv)
{
    char ch;
    int spaces = 0;
    int total  = 0;

    cin.get(ch);

    // 检测是否到句尾
    while (ch != '.')
    {
        // 统计空格次数
        if(ch == ' ')
        {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    
    cout << spaces << " spaces, " << total;// 显示空格数量
    cout << " characters total in sentence\n";

    return 0;
}