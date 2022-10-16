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

const int Asize = 8;
int sum_arr(const int * begin, const int * end);

int main(int argc, char **argv)
{
    int cookies[Asize] = {1,2,4,8,16,32,64,128};    
    
    int sum = sum_arr(cookies, cookies + Asize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eaters ate: " << sum << endl;
    sum = sum_arr(cookies + 4, cookies + 8);
    cout << "Last four eaters ate: " << sum << endl;

    cout << "Done.\n";
    return 0;
}

int sum_arr(const int * begin, const int * end)
{
    const int *pt;
    int total = 0;

    for (pt = begin; pt < end; pt++)
    {
        total = total + *pt;
    }
    return total;
}