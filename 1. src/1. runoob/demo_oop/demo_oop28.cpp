#include<iostream>

// 基类1
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
// 基类2
class PaintCost
{
    public:
       int getCost(int area)
       {
           return area*70;
       }
};
// 派生类
class Rectangle : public Shape, public PaintCost
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
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    std::cout << "Rect area: "<< Rect.getArea() << std::endl;
    std::cout << "Rect cost: "<< Rect.getCost(area) << std::endl;


    system("pause");
    return 0;
}