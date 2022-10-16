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

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *pxy,  polar *pda);
void show_polar(const polar * pda);

int main(int argc, char **argv)
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y value: ";

    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers(q to quit): ";
    }
    
    cout << "Done.\n";

    return 0;
}

void rect_to_polar(const rect *pxy,  polar *pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle    = atan2(pxy->y, pxy->x);
}

void show_polar(const polar * pda)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = "  << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}