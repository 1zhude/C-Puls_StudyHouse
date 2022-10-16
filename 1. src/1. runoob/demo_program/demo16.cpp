#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;
    cout << " (a + b) * c / d   = " << e << endl;

    e = ((a + b) * c) / d;
    cout << " ((a + b) * c) / d = " << e << endl;

    e = (a + b) * (c / d);
    cout << " (a + b) * (c / d) = " << e << endl;

    e = a + (b * c) / d;
    cout << " a + (b * c) / d   = " << e << endl;

    system("pause");
    return 0;
}