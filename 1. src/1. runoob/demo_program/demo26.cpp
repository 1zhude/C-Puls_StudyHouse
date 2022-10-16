#include<iostream>
#include<cmath>

int main(int argc, char *argv[])
{
    short s = 10;
    int i = -1000;
    int l = 100000;
    int f = 230.47;
    double d = 200.374;

    std::cout << "sin(s) = "   << sin(s)   << std::endl;// 正弦
    std::cout << "abs(i) = "   << abs(i)   << std::endl;// 绝对值
    std::cout << "floor(d) = " << floor(d) << std::endl;// 取整
    std::cout << "sqrt(f) = "  << sqrt(f)  << std::endl;// 平方根
    std::cout << "pow(d,2) = " << pow(d,2) << std::endl;// 指数

    system("pause");
    return 0;
}