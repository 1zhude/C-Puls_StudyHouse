#include<iostream>
#include"demo9_1_coordin.h"

using std::cout;
using std::cin;

int main(int argc, char argv)
{
    struct rect rplace;
    struct polar pplace;

    cout << "Enter the x and y value:\n";

    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers(q to quit):";
    }
    cout << "Bye!\n";
    return 0;
}