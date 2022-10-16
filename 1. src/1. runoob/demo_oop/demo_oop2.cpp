#include<iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double heigth;

        double getVolume(void);
        void setLength (double len);
        void setbreadth(double bre);
        void setheigth (double hei);
};

/*成员函数定义*/
double Box::getVolume(void)
{
    return length * breadth * heigth;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setbreadth(double bre)
{
    breadth = bre;
}

void Box::setheigth(double hei)
{
    heigth = hei;
}

int main(int argc, char *argv[])
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    // box1 详述
    Box1.setLength(6.0);
    Box1.setbreadth(7.0);
    Box1.setheigth(5.0);

    // box2 详述
    Box2.setLength(12.0);
    Box2.setbreadth(13.0);
    Box2.setheigth(10.0);

    volume = Box1.getVolume();
    cout << "Box1 volume = " << volume << endl;

    volume = Box2.getVolume();
    cout << "Box2 volume = " << volume << endl;

    system("pause");
    return 0;
}