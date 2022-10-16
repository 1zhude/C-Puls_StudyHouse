#include<iostream>

using namespace std;


class Box
{
    public:
        // 构造函数定义
        Box(double l = 2.0, double b = 2.0, double h = 2.0)
        {
            cout << "Construct called."<< endl;
            length  = l;
            breadth = b;
            height  = h;
        }
        double Volume()
        {
            return length*breadth*height;
        }
        int compare(Box box)
        {
            return this->Volume() > box.Volume();
        }
    private:
        double length;
        double breadth;
        double height;
};

int main(int argc, char *argv[])
{
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    // 判断大小
    if (Box1.compare(Box2))
    {
        cout << "Box2 is small than Box1 " << endl;
    }
    else
    {
        cout << "Box2 is equal to larger than Box1 " << endl;
    }

    system("pause");
    return 0;
}