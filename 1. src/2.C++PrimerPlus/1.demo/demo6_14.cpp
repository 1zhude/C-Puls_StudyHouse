#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;

const int Max = 5;

int main(int argc, char **argv)
{
    double golf[Max];

    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
   
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Please enter a number: ";
        }   
    }
    double total = 0.0;
    for ( i = 0; i < Max; i++)
    {
        total += golf[i];
    }
    cout << total / Max << " = average score " << Max << " rounds\n";
    return 0;
}

