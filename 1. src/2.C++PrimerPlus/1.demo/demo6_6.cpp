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

const char* qualify[4] = 
{
    "10,000-meter race.\n",
    "md tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n",
};

int main(int argc, char **argv)
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if(age > 17 && age < 35)
    {
        index = 0;
    }
    else if (age >= 35 && age < 65)
    {
        index = 2;
    }
    else
    {
        index = 3;
    }

    cout << "You qualify for the " << qualify[index];

    return 0;
}