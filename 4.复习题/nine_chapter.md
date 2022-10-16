# 第九章
## 1.
&emsp;&emsp;a.自动变量，无链接性
&emsp;&emsp;b.未用static说明符的静态变量，链接性：外部
&emsp;&emsp;b.使用static说明符的静态变量，链接性：内部
&emsp;&emsp;c.函数内使用static说明符的静态变量，链接性：无
## 2.
&emsp;&emsp;1.using 声明：声明名称空间内的某个名称可用，若在其声明区域有名称与之冲突，则会报错；
&emsp;&emsp;1.using 编译：将整个名称空间导入声明区域，若在其声明区域有名称与之冲突，则会隐藏；
## 3.
```c
#include <iostream>
int main()
{
    double x;
    std::cout << "Enter value: ";
    while (! (std::cin >> x) )
    {
        std::cout << "Bad input. Please enter a number: ";
        std::cin.clear();
       while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "Value = " << x << std::endl;
    return 0;
}
```
## 4.
```c
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double x;
    cout << "Enter value: ";
    while (! (cin >> x) )
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
       while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
```