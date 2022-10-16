#include<iostream>
/*********************************************************************************************
 * 函数名称：main
 * 函数功能：主线程
 * 输入参数：命令行参数
 * 输出参数：无
 * 全局变量：无
 * 全局模块：无
*********************************************************************************************/
int main(int argc, char *argv[])
{
    int InputNumber;

    try
    {
        std::cin >> InputNumber;
        if(InputNumber == 0x3)
        {
            throw "qwert";
        }
    }
    catch(const char *msg)
    {
        std::cout << msg << std::endl;
    }
    
    system("pause");
    return 0;
}