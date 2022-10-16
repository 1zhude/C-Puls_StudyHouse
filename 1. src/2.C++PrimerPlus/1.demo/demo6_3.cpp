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

int Fave = 27;

int main(int argc, char **argv)
{
    int n;
     
    cout << "Enter a number in the rang 1-100 to find\n";
    cout << "my favorite number: ";
    
    do
    {
        cin >> n;
        if (n < Fave)
        {
            cout << "Too low -- guess again: ";
        }
        else if (n > Fave)
        {
            cout << "Too high -- guess again: ";
        }
        else
        {
            cout << Fave << " is right!\n";
        }
        
    } while(n != Fave);
    
    return 0;
}