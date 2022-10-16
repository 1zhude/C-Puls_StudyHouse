#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy"; 

    cout << "Howdy! I'm " << name2;
    cout << "! what's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letter and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "You initial is " << name1[10] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    system("pause");
    return 0;
}