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

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(int argc, char **argv)
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y value: ";

    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers(q to quit): ";
    }
    
    cout << "Done.\n";

    return 0;
}

polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle    = atan2(xypos.y, xypos.x);

    return answer;
}

void show_polar(polar dapos)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = "  << dapos.angle * Rad_to_deg;
    cout << " degrees\n";

}