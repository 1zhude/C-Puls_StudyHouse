#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;

int main(int argc, char **argv)
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decimal)\n";
    cout << hex;
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << oct;
    cout << "inseam = "<< inseam << "(042 in octal)\n";

    system("pause");
    return 0;
}