#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 10;
    while(a < 20)// 判断条件
    {
        cout << "a = " << a << endl;// 循环体
        a++;// 调整部分
    }
    system("pause");
    return 0;
}