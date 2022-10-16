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
        Distance operator-()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
        // 重载 < 运算符
        bool operator<(const Distance& d)
        {
           if (feet < d.feet)
           {
                return true;
           }
           if (feet == d.feet && inches < d.inches )
           {
                return true;
           }
           return false;
        }
    private:
        int feet;
        int inches;
};

int main(int argc, char*argv[])
{
    Distance D1(11,10), D2(5,11);
    
    if (D1 < D2)
    {
        std::cout << "D1 is less than D2 " << std::endl;
    }
    else
    {
        std::cout << "D2 is less than D1 " << std::endl;
    }

    system("pause");
    return 0;
}