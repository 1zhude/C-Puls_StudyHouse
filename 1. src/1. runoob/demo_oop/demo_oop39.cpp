#include<iostream>

class Adder
{
    // 私有部分
    private:
        int total;
    // 公有部分
    public:
        // 构造函数
        Adder(int i);
        // 对外接口
        void addNumber(int number)
        {
            total += number;
        }
        // 对外接口
        int getTotal()
        {
            return total;
        }
};
// 构造函数
Adder::Adder( int i)
{
    total = i;
}

int main(int argc, char *argv[])
{
    Adder a(0);

    a.addNumber(10);
    a.addNumber(20);
    a.addNumber(30);

    std::cout << "Total is : " << a.getTotal() << std::endl;
    
    system("pause");
    return 0;
} 