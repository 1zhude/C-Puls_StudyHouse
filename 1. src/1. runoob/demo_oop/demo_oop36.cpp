#include<iostream>

class Distance
{
    public:
        // 构造函数
        Distance()
        {
            feet = 0;
            inches = 0; 
        }
        Distance(int f, int i)
        {
            feet = f;
            inches = i;
        }

        void displaydistance()
        {
            std::cout << "F: " << feet << " I: " << inches << std::endl;
        }

        // 重载 - 运算符
        Distance operator()(int a, int b, int c)
        {
            Distance D;
            D.feet = a + c + 10;
            D.inches = b + c + 100;
            return D;
        }
    
    private:
        int feet;
        int inches;
};

int main(int argc, char*argv[])
{
    Distance D1(11,10), D2;
    
    std::cout << "D1 = : ";
    D1.displaydistance();
    
    D2 = D1(10, 10, 10);
    std::cout << "D2 = : ";
    D2.displaydistance();

    system("pause");
    return 0;
}