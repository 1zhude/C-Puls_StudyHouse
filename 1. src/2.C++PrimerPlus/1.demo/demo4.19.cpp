#include<iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;

int main(int argc, char **argv)
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stack[3] = {3,2,1};

    double * pw = wages;
    short * ps = &stack[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
  
    cout << "access two elements with array notation\n";
    cout << "stack[0] = " << stack[0] << ",  stacks[1] = " <<  stack[1] << endl;
    cout << "access two elements with point notation\n";
    cout << "*stack = " << *stack << ", *(stack + 1) = " << *(stack + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw point\n";

    system("pause");
    return 0;
}