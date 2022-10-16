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
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}