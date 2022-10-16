#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;

int main(int argc, char **argv)
{
    char ch;

    cout << "Enter a character " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;

    system("pause");
    return 0;
}