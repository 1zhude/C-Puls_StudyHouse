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

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accuulate(free_throws & target, const free_throws & source);

int main(int argc, char **argv)
{
    free_throws one   = {"Ifelsa Branch", 13, 14};
    free_throws two   = {"Andor Knott", 10, 16};
    free_throws three = {"MInnie Max", 7, 9};
    free_throws four  = {"Whily Looper", 5, 9};
    free_throws five  = {"Long Long", 6, 14};
    free_throws team  = {"Throwgoods", 0, 0};
    free_throws dup;

    set_pc(one);
    display(one);
    accuulate(team, one);
    display(team);

    display(accuulate(team, two));
    accuulate(accuulate(team, three), four);
    display(team);

    dup = accuulate(team, five);
    std::cout << "Displaying team:\n";
    display(team);

    std::cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    accuulate(dup, five) = four;
    std::cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);

    return 0;
}

void display(const free_throws & ft)
{
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws & ft)
{
    if(ft.attempts != 0)
    {
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    }
    else
    {
        ft.percent = 0;
    }
}

free_throws & accuulate(free_throws & target, const free_throws & source)
{
    target.attempts +=  source.attempts;
    target.made     +=  source.made;
    set_pc(target);
    return target;
}