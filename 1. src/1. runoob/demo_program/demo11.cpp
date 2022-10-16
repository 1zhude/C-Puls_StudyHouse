#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line1 - c is : "<< c << endl;
    c = a - b;
    cout << "Line2 - c is : "<< c << endl;
    c = a * b;
    cout << "Line3 - c is : "<< c << endl;
    c = a / b;
    cout << "Line4 - c is : "<< c << endl;
    c = a % b;
    cout << "Line5 - c is : "<< c << endl;

    int d = 10;
    c = d++;
    cout << "Line6 - c is : " << c << endl;

    d = 10;
    c = d--;
    cout << "Line7 - c is : " << c << endl;

    system("pause");
    return 0;
}