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

// 函数声明
const double * f1(const double * ar, int n);
const double * f2(const double * ar, int n);
const double * f3(const double * ar, int n);

int main(int argc, char **argv)
{
    double av[3] = {1112.3, 1542.6, 227.9};

    // 函数指针
    const double* (*p1)(const double *, int) = f1;
    auto p2 = f2;

    cout << "Using pointers to functiongs: \n";
    cout << " Address Value\n";

    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3)    << ": " << *p2(av, 3) << endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;

    cout << "\nUsing an array of pointers to funtions:\n";
    cout << " Address Value\n";

    for (int i = 0; i < 3; i++)
    {
       cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
       cout << (*pa[i])(av, 3) << ": " << *pa[i](av, 3) << endl;
    }
    
    cout << "\nUsing a pointer of pointers to funtions:\n";
    cout << " Address Value\n";

    for (int i = 0; i < 3; i++)
    {
       cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    }

    cout << "\nUsing pointer to an array of pointer:\n";
    cout << " Address Value\n";
    
    auto pc = &pa;
    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
    cout << (*(*pc)[0])(av,3) << ": " << *(*pc)[0](av,3) << endl;

    const double* (*(*pd)[3])(const double *, int) = &pa;
    const double* pdb = (*pd)[1](av, 3);

    cout << pdb << ": " << *pdb << endl;

    cout << *(*pd)[2](av, 3) << ": " <<  *(*(*pd)[2])(av, 3) << endl;

    return 0;
}

const double * f1(const double * ar, int n)
{
    return ar;
}


const double * f2(const double ar[], int n)
{
    return ar + 1;
}

const double * f3(const double ar[], int n)
{
    return ar + 2;
}