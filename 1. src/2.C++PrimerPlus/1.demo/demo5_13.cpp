#include<iostream>
#include<cstring>
#include<string>
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

const int ArSize = 20;

int main(int argc, char **argv)
{
    char name[ArSize];
    cout << "You first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << " : " << int(name[i]) << endl;
        ++i;
    }
    
    //system("pause");
    return 0;
}