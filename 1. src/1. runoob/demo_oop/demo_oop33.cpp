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

        friend std::ostream &operator << (std::ostream &output, const Distance &D)
        {
            output << "F : " << D.feet << " I : " << D.inches;
            return output;
        }
        friend std::istream &operator >> (std::istream &input, Distance &D)
        {
            input >> D.feet >> D.inches;
            return input;
        }
    private:
        int feet;
        int inches;
};

int main(int argc, char*argv[])
{
    Distance D1(11,10), D2(5,11),D3;
    
    std::cout << "Enter the value of object: " << std::endl;
    std::cin  >> D3;
    std::cout << "First Distance: "  << D1 << std::endl;
    std::cout << "Second Distance: " << D2 << std::endl;
    std::cout << "Third Distance: "  << D3 << std::endl;

    system("pause");
    return 0;
}