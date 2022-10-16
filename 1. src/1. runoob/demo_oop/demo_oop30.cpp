#include<iostream>


class Box
{
    public:
        double getVolume(void)
        {
            return length * breadth * height;
        }
        void setLength(double len)
        {
            length = len;
        }
        void setBreadth(double bre)
        {
            breadth = bre;
        }
        void setHeight(double hei)
        {
            height = hei;
        }
        // 运算符重载
        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;    
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
    private:
        double length;
        double breadth;
        double height;
};

int main(int argc, char *argv[])
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    std::cout << "Box1 volume is: " << volume << std::endl;

    volume = Box2.getVolume();
    std::cout << "Box2 volume is: " << volume << std::endl;

    Box3 = Box1 + Box2;
    volume = Box3.getVolume();
    std::cout << "Box3 volume is: " << volume << std::endl; 

    system("pause");
    return 0;
}