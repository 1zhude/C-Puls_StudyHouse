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

const int MAX = 5;

int fill_array(double arr[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double arr[], int n);
int main(int argc, char **argv)
{
    double properties[MAX];

    int size = fill_array(properties, MAX);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revalution factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    
    cout << "Done.\n";
    return 0;
}


int fill_array(double arr[], int limit)
{
    int i;
    double temp;

    for(i = 0; i < limit; i++)
    {
        cout << "Enter value # " << (i + 1) << ": ";
        cin >> temp;

        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if(temp < 0)
        {
            break;
        }
        else
        {}
        arr[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property # " << (i + 1) << ":$";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= r;
    }
}