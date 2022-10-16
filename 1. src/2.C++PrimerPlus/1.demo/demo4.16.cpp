#include<iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;

int main(int argc, char **argv)
{
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; Address of pt = " << pt << endl;

    system("pause");
    return 0;
}