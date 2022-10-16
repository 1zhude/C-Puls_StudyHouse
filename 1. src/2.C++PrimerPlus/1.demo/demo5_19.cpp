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
    int ch;
    int count = 0;

    while ((ch = cin.get()) != EOF)// 判断是否到文件尾部
    {
        //cout << ch;
        cout.put(char(ch));
        ++count;
    }
    
    cout << endl << count << " characters reads\n";

    //system("pause");
    return 0;
}