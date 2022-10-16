#include<iostream>

using namespace std;

class Line
{
    public:
        int getlength(void);
        Line(int len);        // 简单的构造函数
        Line(const Line &obj);// 拷贝构造函数
        ~Line();              // 结构函数
    private:
        int *ptr;
};

// 简单构造函数
Line::Line(int len)
{
    cout << "diao yong gou zao han shu " << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
// 拷贝构造函数
Line::Line(const Line &obj)
{
    cout << "diao yong gou zao han shu bing wei zhi zhen fen pei nei cun " << endl;
    ptr = new int;
    *ptr = *obj.ptr;// 拷贝值
}
// 析构函数
Line::~Line(void)
{
    cout << "shi fang nei cun "<< endl;
    delete ptr;
}

int Line::getlength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line is: "<< obj.getlength() << endl;
}


int main(int argc, char *argv[])
{
    Line line(10);
    
    display(line);

    system("pause");
    return 0;
}