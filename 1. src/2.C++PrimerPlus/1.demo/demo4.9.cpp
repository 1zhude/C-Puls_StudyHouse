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
    char charr[20];
    string str;

    cout << "Length of string in charr before input:" << strlen(charr) << endl;
    cout << "Length of string in str before input:" << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: "<< charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: "<< str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;  
    system("pause");
    return 0;
}