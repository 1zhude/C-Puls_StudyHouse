#include<iostream>

// int max(int i32InputNumber1, int i32InputNumber2 = 150);
int max(int i32InputNumber1, int i32InputNumber2);

int main(int argc, int *argv[])
{
    int a = 100;
    int b = 200;
    int i32Ret = -1;

    // i32Ret = max(a); // 默认另一个参数为150，目前编译器不支持；
    // std::cout << "MAX is : "  << i32Ret << std::endl;

    i32Ret = max(a, b);
    std::cout << "MAX is : "  << i32Ret << std::endl;

    system("pause");
    return 0;
}

/*******************************************************
* 函数名称：max
* 函数功能：比较两个数大小；
* 输入参数：两个待比较大小的数i32InputNumber1、i32InputNumber2（默认为50）
* 输出参数：输入参数中较大的一个数；
* 全局变量：无
* 全局模块：
*********************************************************/
// int max(int i32InputNumber1, int i32InputNumber2 = 150)
int max(int i32InputNumber1, int i32InputNumber2)
{
    if(i32InputNumber1 >= i32InputNumber2)
    {
        return i32InputNumber1;
    }
    else
    {
        return i32InputNumber2; 
    }  
}