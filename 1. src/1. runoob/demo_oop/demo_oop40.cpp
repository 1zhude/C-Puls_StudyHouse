#include<iostream>


class Adder
{
    public:
        // 構造函數
        Adder(int i);
        // 對外接口1
        void addNum(int number)
        {
            total += number;
        }
        // 對外接口2
        int getTotal()
        {
            return total;
        }
    private:
        int total = 0;
    
};
// 構造函數
Adder::Adder(int i = 0)
{
    total = i;
}

int main(int argc, char *argv[])
{
    Adder a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    std::cout << "Total is " << a.getTotal() << std::endl;
    
    system("pause");
    return 0;
}