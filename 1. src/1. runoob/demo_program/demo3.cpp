#include <iostream>
#include <limits>

using namespace std;// 通知编译器使用std命名空间
/*
// 变量声明
extern int   a,b;
extern int   c;
extern float f;

int main(void)
{
    // 变量定义
    int a,b;
    int c;
    float f;

    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0/3.0;
    cout << f << endl;

    system("pause");
    return 0;
}
*/
// 函数声明
int func();

int  main()
{
    // 函数调用
    int i = func();
    cout << i << endl;

    system("pause");
    return 0;
}
// 函数定义
int func()
{
    return 0;
}