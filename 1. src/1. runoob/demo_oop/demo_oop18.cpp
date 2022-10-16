#include<iostream>


using namespace std;
// 定义类
class Box
{
    double width;
    public:
        friend void prinWidth(Box box);
        void setWidth(double wid);
};
// 成员函数定义
void Box::setWidth(double wid)
{
    width = wid;
}

// 友元函数-不属于类的成员函数
void prinWidth(Box box)
{
    cout << "width of box " << box.width << endl;
}

int main(int argc, char *argv[])
{
    Box box;

    box.setWidth(10.0);

    prinWidth(box);

    system("pause");
    return 0;
}