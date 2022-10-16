#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;

bool is_int(double x);
int main(int argc, char **argv)
{
    double num;
    
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num);    
    cout <<"You've enter the integer " << val << "\nBye\n";
    
    return 0;
}


bool is_int(double x)
{
    if(x <= INT_MAX && x >= INT_MIN)
    {
        return true;
    }
    else
    {
        return false;
    }
}


