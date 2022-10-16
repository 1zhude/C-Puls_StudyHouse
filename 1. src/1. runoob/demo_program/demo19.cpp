#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a  = 10;

    do// 循环体
    {
        cout << "a = " << a << endl;
        a++;
    } while (a < 20);// 判断条件
    
    system("pause");
    return 0;
}