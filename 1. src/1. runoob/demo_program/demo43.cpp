#include<iostream>
/****************************************************************************************
 * 函数名称：main
 * 函数功能：主线程
 * 输入参数：命令行参数
 * 输出参数：无
 * 全局变量：
 * 全局模块：
****************************************************************************************/
int main(int argc, char *argv[])
{
    int InputNumber = 0x0;

    std::cin >> InputNumber;

    if (InputNumber == 0x3)
    {
        throw "This is one error!";
    }
    
    system("pause");
    return 0;
}