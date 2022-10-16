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

const int Cities = 5;
const int Years = 4;

int main(int argc, char **argv)
{
    const string cities[Cities] = 
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista",
    };
    
    int maxtemps[Years][Cities] = 
    {
        {96, 100, 87, 101, 105},
        {96,  98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108},
    };

    cout << "Maximum temperatures for 2008 - 2011 \n\n";
    // 打印二维数组中的所有元素
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }
    
    //system("pause");
    return 0;
}