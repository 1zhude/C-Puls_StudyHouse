#include<iostream>

// 定义类
class Line
{
    // 公有成员：成员函数、构造函数、析构函数
    public:
        void setLength(double len);
        double getLength(void);
        Line();
        ~Line();
    private:
       double length;
};
// 构造函数
Line::Line(void)
{
    std::cout << "Object is being create " << std::endl;
}
// 析构函数
Line::~Line(void)
{
    std::cout << "Object is being deleted " << std::endl;
}
// 成员函数1
void Line::setLength(double len)
{
    length = len;
}
// 成员函数2
double Line::getLength(void)
{
    return length;
}
// 主函数
int main(int argc, char*argv[])
{
    Line line;
    
    line.setLength(6.0);
    std::cout << "Length of line : " << line.getLength() << std::endl;
    
    // system("pause");
    getchar();
    return 0;
}
