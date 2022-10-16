#include<iostream>

class Box
{
    public:// 公有成员
        double length;
        void setWidth(double wid);
        double getWidth(void);

    private:// 私有成员
        double width;
};
// 成员函数定义
double Box::getWidth(void)
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}

int main(int argc, char *argv[])
{
    Box box;
    // 不使用成员函数，设置长度
    box.length = 10.0;// length为公有成员
    std::cout << "length is: " <<   box.length << std::endl;

    // 因为宽度是私有的
    box.setWidth(10.0);// 使用成员函数设置宽度
    std::cout << "width is: " <<   box.getWidth() << std::endl;
    
    system("pause");
    return 0;
}