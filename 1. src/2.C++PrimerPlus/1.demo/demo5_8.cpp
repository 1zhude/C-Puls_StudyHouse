#include<iostream>
#include<string>
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
    cout << "The Amazing Accounto will sum and average";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";

    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        cout <<"Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to "<< sum << endl;
    cout << "and average to "<< sum/5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n ";

    //system("pause");
    return 0;
}