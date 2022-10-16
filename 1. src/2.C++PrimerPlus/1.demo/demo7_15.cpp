#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>
#include<fstream>
#include<cstdlib>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;
using std::ofstream;
using std::ifstream;
using std::fixed;


const int Seasons = 4;
const array<string,Seasons> Snames = 
{"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);
int main(int argc, char **argv)
{
    array<double, Seasons> expense;
    fill(&expense);
    show(expense);
    return 0;
}


void fill(array<double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expense: ",
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total: $" << total << endl; 
}
