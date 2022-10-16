#include<iostream>

class printfData
{
    public:
        void printf(int i)
        {
            std::cout << "Input int number is: " << i << std::endl;
        }
        void printf(double f)
        {
            std::cout << "Input float number is: " << f << std::endl;
        }
        void printf(char c[])
        {
            std::cout << "Input string number is: " << c << std::endl;
        }
};

int main(int argc, char*argv[])
{
    printfData pd;

    // 调用重载函数
    pd.printf(5);
    pd.printf(500.263);
    pd.printf("Hello C++");


    system("pause");
    return 0;
}