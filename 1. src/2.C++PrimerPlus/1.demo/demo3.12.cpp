#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;

    int stone = lbs/ Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;

    cout << lbs << "pounds are " << stone << " stone, " << pounds << " pound(s).\n";
    system("pause");
    return 0;
}