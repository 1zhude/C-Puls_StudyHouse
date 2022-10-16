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
long double probability(unsigned numbers, unsigned picks);

int main(int argc, char **argv)
{
    double total, choices;

    cout << "Enter the total number of choices on the game card and\n";
    "the number of pick allowed:\n";

    while((cin >> total >> choices) && (choices <= total))
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit) : ";
    }
    
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n/p;
    }
    
    return result;
}