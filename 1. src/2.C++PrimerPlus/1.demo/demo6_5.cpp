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

const int Asize = 6;

int main(int argc, char **argv)
{
    int n;

    float naaq[Asize];

    cout <<"Enter the NAAQs (New Age Awareness Quotients)"
    << "of\nyour neighbors. Program terminates "
    << "when you make\n" << Asize << " entries "
    << "or enter a negative value.\n";

    int i = 0;
    float temp;

    cout << "First value: ";
    cin >> temp;

    // 最多存放六个正数
    while (i < Asize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i < Asize)
        {
            cout << "Next value ";
            cin >> temp;
        } 
    }
    if (i == 0)
    {
        cout << "No data--bye\n";
    }
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (naaq[j] > you)
            {
                ++count;
            }
            
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
        << "the New Age than you do";
    }
    return 0;
}