# 7.12.1
&emsp;&emsp;1.函数原型
&emsp;&emsp;2.函数定义
&emsp;&emsp;3.函数调用

# 7.12.2
a.```void igor(void)```;
b.```float tofu(int)```
c.``` double mpg(double, double)```
d.``` long summation(long *, int )```
e.``` double doctor(const char *)```
f.``` void ofcource(boss)```
g.``` char * plot(map *)```

# 7.12.3
```c
    void test(int array[], int n, int number)
    {
        for(int i = 0; i < n; i++>)
        {
            array[i] = number;
        }
    }
```
# 7.12.4
```c
    const int Size = 100;、、
    void test(int * array, int * end, int number)
    {
        array[Size] = '\0';
        for(int* p = array; p <end; p++>)
        {
            *p = number;
        }
    }
```
# 7.12.5
```c
double MaxArray(const double *array, int n)
{
    double result = 0.0;
    if(n < 1)
    {
        std::cout <<"Invalid array size\n";
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        result = array[i] > result ? array[i]: result;
    }
    return result;
}
```
# 7.12.6
&emsp;&emsp;基本类型数据作为函数参数传入函数中时，一般是`按值传入`，函数内部使用的只是传入变量的副本，不会修改变量的值；
# 7.12.7
```c
// 第一种
char * str = "yuio";
// 第二种
char str[length] = "yui";
// 第三种
string str;
```
# 7.12.8
```c
int replace(char * str, char c1, char c2)
{
    int count = 0;
    while(*str != '\0')
    {
        if(*str == c1)
        {
            *str = c2;
            count ++;
        }
        str++;
    }
    return count;
}
```
# 7.12.9
&emsp;&emsp;1.`*"pizza"`由于`"pizza"`相当于字符串的地址，对其解引后应为字母`p`;
&emsp;&emsp;2.`"taco"`将被解释为字符串第一个元素的首地址，因此`"taco[2]"`解释为字符串的第二个元素的值，即为`c`;
# 7.12.10
&emsp;&emsp;1.按值传入：直接传入结构类型`glitz`;这会耗费大量内存和运行时间，但是不会改变传入的结构数值；
&emsp;&emsp;2.地址传入：传入`&glitz`;这会加快运行速度，但是会允许修改原始数据；
# 7.12.11
```c
int judge(int (*pf)(const char *));
```
# 7.12.12
```c
#include<iostream>
struct applicant
{
    char name[30];
    int credit_ratings[3];
};
// demo1
void show_demo1(struct applicant app)
{
    std::cout << app.name;
    for(int i = 0; i < 3; i++)
    {
        std::cout << app.credit_ratings[i];
    }
}
// demo2
void show_demo2(struct applicant* app)
{
    std::cout << app->name;
    for(int i = 0; i < 3; i++)
    {
        std::cout << app->credit_ratings[i];
    }
}
```
# 7.12.13
```c
void f1(applicant * a);
const char * f2(const applicant *a1, const applicant * a2);
// 函数指针
void (*p1)(applicant * a);
const char * (*p2)(const applicant *a1, const applicant * a2);
// 指针数组
void (*ap[5])(applicant * a) = {p1, p1, p1, p1, p1};
const char * (*bp[10])(const applicant *a1, const applicant * a2) = {p2};
//指向指针数组的指针
const char * (*( *pa)[10])(const applicant *a1, const applicant * a2) = &bp;
```
```c
void f1(applicant * a);
const char * f2(const applicant *a1, const applicant * a2);
// 函数指针
typedef void (*p1)(applicant * a) fun_f1;
typedef const char * (*p2)(const applicant *a1, const applicant * a2) fun_f2;
// 指针数组
fun_f1 ap[5];
//指向指针数组的指针
fun_f2 (*pa)[10];
```
