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
    float volum;
    double price;
};

int main(int argc, char **argv)
{
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item:";
    cin.get(ps->name, 20);
    cout << "Enter volum in cubic feet:";
    cin >> (*ps).volum;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: "<< ps->volum << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    
    system("pause");
    return 0;
}