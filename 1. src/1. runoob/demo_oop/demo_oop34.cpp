#include<iostream>

class Time
{
    private:
        int hours;
        int minutes;
    public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    // 显示时间
    void displaytime()
    {
        std::cout << "H : " << hours << " M : " << minutes << std::endl;
    }
    // 重载前缀`++`
    Time operator++()
    {
        ++ minutes;
        if(minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    // 重载后缀`++`,括号内加int表明这是一个后缀形式
    Time operator++(int)
    {
        // 保存原始数据
        Time T(hours,minutes);
        ++ minutes;
        if(minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        // 后缀`++`为先进行表达式操作后执行`++`
        return T;
    }
};

int main(int argc, char *argv[])
{
    Time T1(11, 59), T2(10, 40);
   
    ++T1;
    T1.displaytime();
    ++T1;
    T1.displaytime();

    T2++;
    T2.displaytime();
    T2++;
    T2.displaytime();

    system("pause");
    return 0;
}