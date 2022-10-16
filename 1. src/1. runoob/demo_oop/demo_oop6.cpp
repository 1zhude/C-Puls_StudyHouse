#include<iostream>

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);
    private:
        double length;
};

// 成员函数定义
// 构造函数
Line::Line(double len)
{
    std::cout << "Object is being create, length = " << len << std::endl;
    length = len;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main(int argc, char *argv[])
{
    Line line(10.0);
    
    // 获取默认长度
    std::cout << "Length of line : " << line.getLength() << std::endl;
    line.setLength(6.0);
    std::cout << "Length of line : " << line.getLength() << std::endl;
   
    system("pause");
    return 0;
}