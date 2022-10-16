#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;


int main(int argc, char **argv)
{
    int n;
    cout <<"Enter numbers in the rang 1-10 to find ";
    cout <<"my favorite number\n";

    do
    {
       cin >> n;
    } while (n != 7);
    
    cout << "Yes, 7 is my favorite.\n";
    //system("pause");
    return 0;
}