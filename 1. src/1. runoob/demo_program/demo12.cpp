#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 21;
    int b = 10;
    int c;

    if(a == b)
    {
        cout << "Line1 - a = b " << endl;
    }
    else
    {
        cout << "Line1 - a != b " << endl;
    }

    if(a < b)
    {
        cout << "Line2 - a < b " << endl;
    }
    else
    {
        cout << "Line2 - a >= b " << endl;
    }

    if(a > b)
    {
        cout << "Line3 - a > b " << endl;
    }
    else
    {
        cout << "Line3 - a <= b " << endl;
    }   

    a = 5;
    b = 20;

    if(a <= b)
    {
        cout << "Line4 - a <= b " << endl;
    }

    if(b >= a)
    {
        cout << "Line5 - a >= b " << endl;
    }  

    system("pause");
    return 0;
}