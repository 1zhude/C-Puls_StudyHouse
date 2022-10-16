#include<iostream>

// 基类
class Shape
{
    public:
        void setWidth(int wid)
        {
            width = wid;
        }
        void setHeight(int hei)
        {
            height = hei;
        }
    protected:
        int width;
        int height;
};
// 派生类
class Rectangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

int main(int argc, char *argv[])
{
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    std::cout << "Area is: " << Rect.getArea() << std::endl;
    
    system("pause");
    return 0;
}