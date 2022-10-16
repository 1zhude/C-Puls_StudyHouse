#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>
#include<fstream>

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
using std::fixed;


int main(int argc, char **argv)
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    ofstream outfile;// 建立文件cout对象
    outfile.open("carinfo.txt");// 将建立对象与文件建立联系

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "year: " << year << endl;
    cout << "Was asking $ " << a_price << endl;
    cout << "Now asking $ " << d_price << endl;
   
    outfile << fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile << "Make and model: " << automobile << endl;
    outfile << "year: " << year << endl;
    outfile << "Was asking $ " << a_price << endl;
    outfile << "Now asking $ " << d_price << endl;

    outfile.close();
    return 0;
}

