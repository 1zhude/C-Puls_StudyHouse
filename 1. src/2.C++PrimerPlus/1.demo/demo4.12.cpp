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
    inflatable bouquet = 
    {
        "sunflowers",
        1.88,
        29.99
    };
    inflatable choice;

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;

    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    system("pause");
    return 0;
}