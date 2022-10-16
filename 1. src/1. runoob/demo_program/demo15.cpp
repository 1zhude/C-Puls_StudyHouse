#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 21;
    int c;

    c = a;
    cout << "Line1 - '=' is: " << c << endl;

    c += a;
    cout << "Line2 - '+=' is: " << c << endl;

    c -= a;
    cout << "Line3 - '-=' is: " << c << endl;

    c *= a;
    cout << "Line4 - '*=' is: " << c << endl;

    c /= a;
    cout << "Line5 - '/=' is: " << c << endl;

    c = 200;
    c %= a;
    cout << "Line6 - '%=' is: " << c << endl;

    c <<= 2;
    cout << "Line7 - '/=' is: " << c << endl;

    c >>= 2;
    cout << "Line8 - '/=' is: " << c << endl;

    c &= 2;
    cout << "Line9 - '/=' is: " << c << endl;

    c ^= 2;
    cout << "Line10 - '/=' is: " << c << endl;

    c |= 2;
    cout << "Line11 - '/=' is: " << c << endl;

    system("pause");
    return 0;
}