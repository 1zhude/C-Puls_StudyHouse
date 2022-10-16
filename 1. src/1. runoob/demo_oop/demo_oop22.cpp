#include<iostream>


class Box
{
    public:
    //构造函数
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        std::cout << "Constructor called." << std::endl;
        length = l;
        breadth = b;
        height = h;
    }

    double Volume()
    {
        return length*breadth*height;
    }

    private:
        double length;
        double breadth;
        double height;
};

int main(int argc, char *argv[])
{
    Box box1(3.3, 1.2, 1.5);
    Box box2(8.5, 6.0, 2.0);
    Box *ptrBox;

    ptrBox = &box1;
    std::cout << "volume of Box1 " << ptrBox->Volume() << std::endl;

    ptrBox = &box2;
    std::cout << "volume of Box2 " << ptrBox->Volume() << std::endl;

    system("pause");
    return 0;
}