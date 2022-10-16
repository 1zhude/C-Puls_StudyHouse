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

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(int argc, char **argv)
{
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);


    travel_time day3 = {4,32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, "
    << t.mins << " minutes\n";
}