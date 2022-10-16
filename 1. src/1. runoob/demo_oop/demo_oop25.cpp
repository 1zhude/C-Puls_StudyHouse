#include<iostream>

class Box
{
    public:
        static int objectCount;
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        std::cout << "Constructor called." << std::endl;
        length = l;
        breadth = b;
        height = h;
        objectCount ++;
    }

    double Volume()
    {
        return length*breadth*height;
    }

    static int getCount()
    {
        return objectCount;
    }

    private:
        double length;
        double breadth;
        double height;
};

int Box::objectCount = 0;

int main(int argc, char *argv[])
{
    std::cout << " Intal Stage Count:" << Box::getCount() << std::endl;
    Box box1(3.3, 1.2, 1.5);
    Box box2(8.5, 6.0, 2.0);

    std::cout << "Final Stage Count " << Box::getCount() << std::endl;

    system("pause");
    return 0;
}