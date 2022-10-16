#include<iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;

struct antarctica_years_end
{
    int year;
};


int main(int argc, char **argv)
{
    antarctica_years_end s01, s02, s03;// 结构体变量
    s01.year = 1998;
    antarctica_years_end * pa = &s02;// 结构体指针
    pa->year = 1999;
    antarctica_years_end trio[3];// 结构体数组
    trio[0].year = 2003;
    cout << trio->year << endl;

    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};// 结构体指针数组
    cout << arp[1]->year << endl;
    const antarctica_years_end **ppa = arp;// 结构体指针数据的另一写法
    auto ppb = arp;// 自动识别数据类型
    cout << (*ppa)->year<< endl;
    cout << (*(ppb + 1))->year<< endl;

    system("pause");
    return 0;
}