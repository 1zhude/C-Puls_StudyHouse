#include<iostream>

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line();
    private:
        double length;  
};

// 成员函数定义
// 构造函数
Line::Line(void)
{
    std::cout << "Object is being create " << std::endl;
}
// 公有成员函数
void Line::setLength(double len)
{
    length = len;
}
// 公有成员函数
double Line::getLength(void)
{
    return length;
}

int main(int argc, char*argv[])
{
    Line line;

    // 设置长度
    line.setLength(6.0);
    std::cout << "length of line: " << line.getLength() << std::endl;

    system("pause");
    return 0;
}