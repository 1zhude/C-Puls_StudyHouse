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
    int count = 0;

    cout << "Enter characters; enter # to quit: \n";
    cin >> ch;
    while (ch != '#')// 设置哨兵字符为'#'
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    
    cout << endl << count << " characters reads\n";

    //system("pause");
    return 0;
}