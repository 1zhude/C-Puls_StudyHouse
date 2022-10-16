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

char * buildstr(char c, int n);

int main(int argc, char **argv)
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter a integer: ";
    cin >> times;

    char *ps = buildstr(ch, times);
    cout << ps << endl;

    delete [] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;

    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    *(pstr + n) = '\0';

    while (n-- > 0)
    {
        pstr[n] = c;
    }
    return pstr;
}