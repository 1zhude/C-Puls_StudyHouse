#include<fstream>
#include<iostream>
/**********************************************************************************
* 函数名称：主函数
* 函数功能：主线程
* 输入参数：命令行参数
* 输出参数：无
* 全局变量：无
* 全局模块：ofstream、ifstream
**********************************************************************************/
int main(int argc, char *argv[])
{
    char data[100];

    // 以写模式打开文件
    std::ofstream outfile;
    outfile.open("afile.dat");

    std::cout << "Writing to the file" << std::endl;
    std::cout << "Enter your name:";
    std::cin.getline(data, 100);// 从函数外部读取一行函数

    // 向文件写入用户输入的数据
    outfile << data << std::endl;

    std::cout << "Enter your age:";
    std::cin >> data;
    std::cin.ignore();// 忽略掉之前语句留下的多余字符
   
    // 再次向文件写入用户输入的数据
    outfile << data << std::endl;

    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    std::ifstream infile;
    infile.open("afile.dat");

    std::cout << "Reading from the file" << std::endl;
    infile >> data;
   
    // 在屏幕上写入数据
    std::cout << data << std::endl;

    // 再次从文件读取数据，并显示它
    infile >> data;
    std::cout << data << std::endl;

    // 关闭文件
    infile.close();

    system("pause");
    return 0;
}