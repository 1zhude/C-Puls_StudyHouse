#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;

    cout << "Tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    
    system("pause");
    return 0;
}