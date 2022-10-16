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
    cout << "Enter an integer:";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (size_t i = 0; i < 100; i+=by)
    {
        cout << i << endl;
    }
    cout << "for end!\n";
    
    system("pause");
    return 0;
}