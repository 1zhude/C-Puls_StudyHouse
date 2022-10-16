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

unsigned int c_in_str(const char *str, char ch);

int main(int argc, char **argv)
{
    char mmm[15] = "minimum";
    char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;


    return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;

    while (*str)
    {
        if(*str == ch)
        {
            count ++;
        }
        str++;
    }
    return count;
}