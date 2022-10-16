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

const int SIZE = 5;
void display(const string sa[], int n);

int main(int argc, char **argv)
{
    string list[SIZE];
    cout << "Enter your "<< SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }
    
    cout << "Your list:\n";
    display(list, SIZE);
    
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    } 
}