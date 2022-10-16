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

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char **argv)
{
    inflatable guests[2] = 
    {
       {"Bambi", 0.5, 21.99},
       {"Godzilla", 2000, 565.99}
    };

    cout << "The guests " << guests[0].name << " and ";
    cout << guests[1].name << "\nhave a combined volume of "
    << guests[0].volume +  guests[1].volume << " cubic feet.\n";

    system("pause");
    return 0;
}