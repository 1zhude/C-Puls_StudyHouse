#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
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

int Fave = 27;

int main(int argc, char **argv)
{
    int n;
     
    cout << "This program may reformat your hard disk\n "
            "and destroy all your data.\n"
            "Do you wish to continue?<y/n>";
    char ch;

    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << "You were warned!\a\a\n";
    }
    else if (ch == 'n' || ch == 'N')
    {
        cout << "A wise choice ... bye\n";
    }
    else
    {
        cout << "That wasn't a y or n! Apparently you "
        "can't follow\ninstructions, so"
        "I'll trash your disk anyway.\a\a\n";
    }
    
    return 0;
}