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

    float a = 2.34E+4f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b - a = " << b -a << endl;

    system("pause");
    return 0;
}