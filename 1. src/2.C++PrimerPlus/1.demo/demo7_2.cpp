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

void cheers(int);
double cube(double x);

int main(int argc, char **argv)
{
    cheers(5); 
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";

    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}