#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;

    c = a & b;
    cout << "Line1 - c is :" << c << endl;
   
    c = a | b;
    cout << "Line2 - c is :" << c << endl;
   
    c = a ^ b;
    cout << "Line3 - c is :" << c << endl;
 
    c = ~a;
    cout << "Line4 - c is :" << c << endl;

    c = a << 2;
    cout << "Line5 - c is :" << c << endl;

    c = a >> 2;
    cout << "Line6 - c is :" << c << endl;

    system("pause");
    return 0;
}