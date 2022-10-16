#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;

enum{red, orange, yellow, green, blue, violet, indigo};
int main(int argc, char **argv)
{
    cout << "Enter color code (0-6):";
    int code;
    cin >> code;

    while (code >= red && code <= indigo)
    {
        switch (code)
        {
        case red :
            cout << "Her lips were red.\n";
            break;
        case orange :
            cout << "Her lips were orange.\n";
            break;
        case yellow :
            cout << "Her lips were yellow.\n";
            break;
        case green :
            cout << "Her lips were green.\n";
            break;
        case blue :
            cout << "Her lips were blue.\n";
            break;
        case violet :
            cout << "Her lips were violet.\n";
        case indigo :
            cout << "Her lips were indigo.\n";
            break;
        default:
            break;
        }
        cout << "Enter color code(0-6): ";
        cin >> code;
    }
    
    cout << "Bye\n";
    return 0;
}

