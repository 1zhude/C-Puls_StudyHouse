#include<iostream>
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
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for(i = limit; i; i--)
    {
        cout << "i = " << i << "\n";
    }
    cout << "Done now that i = "<< i << "\n";
    system("pause");
    return 0;
}