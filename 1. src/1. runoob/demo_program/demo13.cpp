#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 21;
    int b = 10;
    int c;

    if(a && b)
    {
        cout << "Line1 - true "<< endl;
    }

    if(a || b)
    {
        cout << "Line2 - false "<< endl;
    }  

    a = 0;
    b = 10;
    if(a && b)
    {
        cout << "Line3 - true "<< endl;
    }
    else
    {
        cout << "Line4 - false "<< endl;
    }
  
    if(!(a && b))
    {
        cout << "Line5 - true "<< endl;
    }

    system("pause");
    return 0;
}