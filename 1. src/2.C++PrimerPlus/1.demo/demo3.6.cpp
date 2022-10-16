#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;

int main(int argc, char **argv)
{
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout <<"Display char ch using cout.put(ch)";
    cout.put(ch);

    cout.put('!');
    cout << endl << "Done" << endl;

    cout << '\0x32';
    cout << endl;
    cout << "\032";
    cout << endl;

    system("pause");
    return 0;
}