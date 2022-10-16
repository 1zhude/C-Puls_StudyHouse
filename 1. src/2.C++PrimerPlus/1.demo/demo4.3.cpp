#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    const int Size = 20;
    char name1[Size];
    char dessert[Size]; 

    cout << "Enter your name:\n";
    cin >> name1;
    cout << "Enter your favorite dessert:\n";  
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name1 << ".\n";

    system("pause");
    return 0;
}