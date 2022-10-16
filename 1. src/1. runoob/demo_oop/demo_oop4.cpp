#include<iostream>

class Box
{
    protected:
        double width;
};

class SmallBox:Box // SmallBox是派生类；
{
    public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
    return width;
}

// 子类的成员函数
void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

/****************** 主函数 *******************/
int main(int argc, char *argv[])
{
    SmallBox box;
    
    box.setSmallWidth(5.0);
    std::cout << "width of box "<< box.getSmallWidth() << std::endl;

    system("pause");
    return 0;
}