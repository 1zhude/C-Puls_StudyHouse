#include<iostream>

using namespace std;

class Line
{
    public:
        int getLength(void);
        Line(int len);
        Line(const Line &obj);
        ~Line();
    private:
        int *ptr;
};

// 简单构造函数
Line::Line(int len)
{
    cout << "diao yong jian dan gou zao han shu" << endl;
    ptr = new int;
    *ptr = len;
}
Line::Line(const Line &obj)
{
    cout << "diao yong kao bei gou zao han shu" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

// 析构函数
Line:: ~Line()
{
    cout << "si fang nei cun" << endl;
    delete ptr;
}
// 公有成员函数
int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Line is " << obj.getLength() << endl;
}

int main(int argc, char *argv[])
{
    Line line1(10);

    Line line2 = line1;

    display(line1);
    display(line2);

    system("pause");
    return 0;
}