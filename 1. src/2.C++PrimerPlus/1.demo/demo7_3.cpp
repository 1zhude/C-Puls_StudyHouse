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
void n_chars(char, int);

int main(int argc, char **argv)
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the"
        " q-key to quit: ";
        cin >> ch;
    }
    
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    
    return 0;
}
/************************************
 * 显示n次字符c
*************************************/
void n_chars(char c, int n)
{
    while (n-- > 0)
    {
        cout << c;
    }
    
}