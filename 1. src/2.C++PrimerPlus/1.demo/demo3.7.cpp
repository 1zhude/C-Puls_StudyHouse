#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;

int main(int argc, char **argv)
{
    cout << "\aOperation \"HyperHype\" is now activate!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    cout << '\a';
    system("pause");
    return 0;
}