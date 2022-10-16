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
#include<cmath>

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

void countdown(int n);
int main(int argc, char **argv)
{
    countdown(5);
    return 0;
}

void countdown(int n)
{
    cout << "Counting down ..." << n  << " (n at " << &n << ")"<< endl;
    if (n > 0)
    {
        countdown(n - 1);
    }
    cout << n << ": Kaboom!" << " (n at " << &n << ")\n";
}