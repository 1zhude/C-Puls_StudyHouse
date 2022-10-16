# 第八章
## 1.
&emsp;&emsp;1.内联函数是在预编译阶段用函数定义代码代替函数调用，当函数执行时间小于函数调用时间时，使用内联函数可以减少程序的运行时间；
## 2.
&emsp;&emsp;a.```c void song(const char *name, int times = 1)```
&emsp;&emsp;b.设置参数默认值只需在函数声明的地方设置默认值即可，不需要对函数定义进行修改；
&emsp;&emsp;c.可以为`name`提供默认值，但是必须也向`times`提供默认参数，因为将函数的参数设置为默认参数，则该参数右边的所有参数都必须时默认值；
## 3.
```c++
#include<iostream>
    // demo1
    void iquote(int n)
    {
        std::cout << "\"" << n << "\"";
    }
    // demo2
    void iquote(double d)
    {
        std::cout << "\"" << d << "\"";
    }
    // demo3
    void iquote(string str)
    {
        std::cout << "\"" << str << "\"";
    }
```
## 4.
&emsp;&emsp;a.
```c
    #include<iostream>

    struct box
    {
        char maker[40];
        float height;
        float width;
        float length;
        float volume;
    };

    // demo1
    void show(const struct box & Box)
    {
        std::cout << Box.maker  << std::endl;
        std::cout << Box.height << std::endl;
        std::cout << Box.height << std::endl;
        std::cout << Box.length << std::endl;
        std::cout << Box.volume << std::endl;
    }
    // demo2
    void volume(struct box & Box)
    {
        Box.volume =  Box.height *  Box.width * Box.length;
    }

```
## 5.
&emsp;&emsp;1.将参数修改为const参数，
&emsp;&emsp;2.将函数跟改为:
```c
void fill(std::array<double, Season>& da);
void show(std::array<double, Season>& da);
```

## 6.
&emsp;&emsp;a.
```c
#include<iostream>
double mass(double density, double volume = 1);// 函数声明
 ```
&emsp;&emsp;b.
```c
#include<iostream>
void repeat(int num, string str);// 函数声明1
void repeat(string str);// 函数声明2
void repeat(int num, string str)
{
    for(int i = 0; i < num; i++)
    {
        std::cout << str << std::endl;
    }
}
void repeat(string str)
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << str << std::endl;
    }
}
 ```
&emsp;&emsp;c.
```c
#include<iostream>
template<typename T> T average(T a, T b)
{
    return (a + b)/2;
}
```
&emsp;&emsp;d.该函数无法实现重载,因为这两个函数的特征标相同;
## 7.
```c
template <typename T > T MAX(const T &a, const T &b)
{
    return a > b ? a : b;
}
```
## 8.
```c
template <> T MAX(box)(const  struct box &a, const  struct box &b);
```
## 9.
```c
v1:float类型；
v2:一个指向float类型的引用
v3:一个指向float类型的引用
v4:int类型的变量
v5:m是float,2.0也是double类型，在进行运算的时候将float提升为double类型，因此运算结果为double类型，故v5为double类型；
```