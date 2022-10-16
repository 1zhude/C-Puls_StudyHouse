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
   int updates = 6;
   int *p_updates = NULL;

   p_updates = &updates;
   
   cout << "Values: updates = " << updates;
   cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    system("pause");
    return 0;
}