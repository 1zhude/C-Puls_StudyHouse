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

    cout << "Type, and I shall repeat.\n";
    cin.get(ch);

    // 检测是否到句尾
    while (ch != '.')
    {
        if (ch == '\n')
        {
            std::cout << ch;
        }
        else
        {
            std::cout << ++ch; 
        }
        cin.get(ch);
    }
    
    cout << "\nPlease excuse the slight confusion.\n" << endl;
    return 0;
}