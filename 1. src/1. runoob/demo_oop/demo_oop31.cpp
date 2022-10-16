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

        // 重载运算符
        Distance operator-()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
    private:
        int feet;
        int inches;
};

// 主函数
int main(int argc, char* argv[])
{
    Distance D1(11, 10), D2(-5, 11);

    -D1;
    D1.displaydistance();

    -D2;
    D2.displaydistance();

    system("pause");
    return 0;
}