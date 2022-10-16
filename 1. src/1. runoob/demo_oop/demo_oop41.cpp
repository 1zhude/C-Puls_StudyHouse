#include<iostream>

// 基类
class Shape
{
    public:
        // 提供接口框架的纯虚函数
        virtual int getArea() = 0;
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};
// 派生类1
class Rectangle:public Shape
{
    public:
        int getArea()
        {
            return(width * height);
        }        
};
// 派生类2
class Triangle:public Shape
{
    public:
        int getArea()
        {
            return(width * height)/2;
        }        
};

int main(int argc, char *argv[])
{
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    std::cout << "Total Rectangle area: " << Rect.getArea() << std::endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    std::cout << "Total Triangle area: " << Tri.getArea() << std::endl;

    system("pause");
    return 0;
}