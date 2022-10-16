/*****************************************************************
 * 功能：C++PrimerPlus测试用例
 * 开发作者：zhude
 * 开发时间：20220511
******************************************************************/
// 头文件声明
#include<iostream>
// 函数声明
int stonetolb(int sts);
/***************************************************************
 * 函数名称：main
 * 函数功能：主函数
 * 输入参数：命令行参数
 * 输出参数：无
 * 调用全局变量: 无
 * 调用全局模块：stonetolb
***************************************************************/
int main(int argc, char **argv)
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    system("pause");
    return 0;
}
/***************************************************************
 * 函数名称：stonetolb
 * 函数功能：将 英石 转换成 磅
 * 输入参数：sts：英石
 * 输出参数：14 * sts : 磅
 * 调用全局变量: 无
 * 调用全局模块：无
***************************************************************/
int stonetolb(int sts)
{
    return 14 * sts;
}