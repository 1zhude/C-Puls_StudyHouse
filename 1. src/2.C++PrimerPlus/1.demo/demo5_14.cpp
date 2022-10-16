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

const int ArSize = 20;

int main(int argc, char **argv)
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock()- start < delay)
    {
        ;
    }
    cout << "done \a\n";
    //system("pause");
    return 0;
}