// 头文件声明
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
#include<cstdlib>
// 名称空间声明
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
using std::ios;
using std::ostream;
// 函数声明
void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
// 主函数
int main(int argc, char **argv)
{
    ofstream fout;
    const char * fn = "ep-data.txt";

    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    
    double objective;

    cout << "Enter the focal length of your "
            "telescope objective in mm: ";

    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal length, in mm, of " << LIMIT << " eyepieces:\n";

    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ":";
        cin >> eps[i];
    }
    
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);

    cout << "Done\n";

    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial; 
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;

    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }

    os.setf(initial);
}