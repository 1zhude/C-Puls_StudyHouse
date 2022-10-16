#include<iostream>

using namespace std;

class Box
{
    public:
    double length; // 长度
    double breadth;// 宽度
    double heigth; // 高度
    // 成员函数声明
    double get(void);
    void set(double len, double bre, double hei);
};

/***************************************
 *成员函数定义
 *函数名称：get();
 ***************************************/
double Box::get(void)
{
    return length*breadth*heigth;
}

void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    heigth = hei;
}
/**********************************************
*函数名称：主函数
**********************************************/
int main(int argc, char *argv[])
{
    Box Box1;  // 声明Box1,类型为 Box
    Box Box2;  // 声明Box2,类型为 Box
    Box Box3;  // 声明Box3,类型为 Box
    double volume = 0.0; // 用于存储体积
    
    // Box1 详述
    Box1.heigth = 5.0;
    Box1.length = 6.0;
    Box1.heigth = 7.0;

    // Box2 详述
    Box2.heigth = 10.0;
    Box2.length = 12.0;
    Box2.heigth = 13.0;

    volume = Box1.heigth * Box1.length * Box1.heigth;// 计算box1体积
    cout << "Box1 volume = " << volume << endl;

    volume = Box2.heigth * Box2.length * Box2.heigth;// 计算box1体积
    cout << "Box2 volume = " << volume << endl;

    Box3.set(16.0, 8.0, 12.0);// 调用类成员函数
    volume = Box3.get();
    cout << "Box3 volume = " << volume << endl;

    system("pause");
    return 0;
}