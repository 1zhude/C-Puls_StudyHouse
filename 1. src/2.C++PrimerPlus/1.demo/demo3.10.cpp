#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads " <<hats + heads << endl;
    cout << "hats - heads " <<hats - heads << endl;
    cout << "hats * heads " <<hats * heads << endl;
    cout << "hats / heads " <<hats / heads << endl;

    system("pause");
    return 0;
}