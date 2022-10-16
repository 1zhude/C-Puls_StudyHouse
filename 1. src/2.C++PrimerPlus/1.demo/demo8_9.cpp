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

const int Arsize = 80;
// 函数声明
char * left(const char * str, int n = 1);
// 主函数
int main(int argc, char **argv)
{
    using namespace std;
    char sample[Arsize];
    cout << "Enter a string:\n";
    cin.get(sample, Arsize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;

    return 0;
}

char * left(const char * str, int n)
{
    if(n < 0)
    {
        n = 0;
    }
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
    {
        p[i] = str[i];
    }
    
    while (i <= n)
    {
        p[i++] = '\0';
    }
    return p;
}
