#include<iostream>

using namespace std;
int g = 0; // 全局变量

int main(int argc, char *argv[])
{
    int a,b;
    a = 10;
    b = 20;
    g = a + b;

    cout << g;

    cin.get();
    cin.get();
    return 0;
}