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

char * left(const char * str, int n);
unsigned long left(unsigned long num, unsigned ct);
// 主函数
int main(int argc, char **argv)
{
    char * trip = "Hawaii!!"; 
    unsigned long n = 1234567;
    int i;
    char * temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;
    }
    
    return 0;
}


unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if((ct == 0) || (num == 0))
    {
        return 0;
    }

    // 计算num各数
    while (n /= 10)
    {
        digits++;
    }
    
    if(digits > ct)
    {
        ct = digits - ct;

        while (ct--)
        {
            num /= 10;
        }
        return num;
    }
    else
    {
        return num;
    }
}

char * left(const char * str, int n)
{
    if(n < 0)
    {
        n = 0;
    }

    char * p = new char [n + 1];
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