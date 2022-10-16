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

char * getname(void)
{
    char name[80];
    cout << "Enter your name\n";
    cin >> name;
    char *pn = new char[strlen(name) + 1];// 使用new分配动态内存
    strcpy(pn, name);// 拷贝字符串

    return pn;
}

int main(int argc, char **argv)
{
    char *name = NULL;
    name = getname();
    cout << name << " at " << (int *)name << endl;;
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *)name << endl;;
    delete [] name;

    system("pause");
    return 0;
}