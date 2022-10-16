# 第十章 对象和类
## 1.过程性编程和面向对象编程
&emsp;&emsp;1.过程性编程：首先考虑步骤，然后如何考虑如何表示数据；
&emsp;&emsp;2.考虑对象所需数据以及描述用户数据交互所需操作；
## 2.类的定义
&emsp;&emsp;1.使用关键字`class`定义类，类内的数据对象称为`数据成员`，数据的操作函数称为`成员函数`;
## 3.类的访问控制
&emsp;&emsp;`public`(公有成员)：使用类的对象都可以直接访问公有部分；
&emsp;&emsp;`private`(私有成员)：只能通过公有成员访问；
&emsp;&emsp;定义成员函数时可以通过作用域解析运算符`::`来标识函数所属的类；
&emsp;&emsp;定义位于类声明中的函数将自动称为`内联函数`；
&emsp;&emsp;创建对象： `类名 + 对象名`；
&emsp;&emsp;创建的每个新对象都有自己的储存空间，用于存储内部变量和类成员，但是同一个类所有对象共享同一组类方法；
## 4.使用类
&emsp;&emsp;1.要创建类对象可以声明类变量，也可以使用new为类对象分配存储空间；
&emsp;&emsp;2.可以将对象作为函数的参数和返回值，也可以将一个对象赋给另一个对象；
&emsp;&emsp;3.类函数(方法)可通过类对象使用句点运算符`.`调用；
## 5.类的构造函数
&emsp;&emsp;1.类的构造函数：用于构造心新对象、将值赋给它们的数据成员；
&emsp;&emsp;2.构造函数的名字与类名相同；
&emsp;&emsp;3.构造函数没有声明类型；
&emsp;&emsp;4.构造函数的形参名不能与类成员相同；
&emsp;&emsp;5.使用构造函数声明对象：
```c
class Stock;
Stock :: Stock(const char * str, int num , double dnum);
Stock garment("Furry Mason", 50, 2.5);// 隐式调用构造函数
Stock food = garment("world Cabbage", 250, 2.5);// 显式调用构造函数
Stock *pstock = new Stock("world Cabbage", 18, 19.0);// 使用new动态分配内存
```
&emsp;&emsp;6.构造函数被用来创建对象，不能通过对象来调用；
&emsp;&emsp;7.没有定义任何构造函数时，编译器才会提供默认构造函数；
```c
Stock fluffy_the_cat;// 调用默认构造函数
```
&emsp;&emsp;8.如果定义了任何一个构造函数的重载实现，则必须重新定义并覆盖系统提供的默认构造函数；
## 6.类的析构函数
&emsp;&emsp;1.对象过期后，程序调用析构函数进行数据清理；
&emsp;&emsp;2.名称：`~+类名`、无参数、无返回值和声明类型；
&emsp;&emsp;3.通常情况下，析构函数调用由编译器决定，不能由用户显示调用；

## 6.const成员函数
&emsp;&emsp;为保证函数不会修改对象；
```c
函数声明 + const;
```
## 7.this指针
&emsp;&emsp;每个成员函数都有一个this指针指向调用对象；
## 8.对象数组
&emsp;&emsp;1.声明方式与声明标准类型数组相同；
&emsp;&emsp;2.使用构造函数初始化对象数组
```c
const int STKS = 4;
Stock stocks[STKS] = {
    Stock("NanoSmart", 12.5, 20),
    Stock("Boffo Objects", 200, 2.0),
    Stock("Monolithic Obelisks", 130, 3.25),
    Stock("Fleep Enterprises", 60, 6.5)
    };
```

## 8.类作用域
&emsp;&emsp;1.类中的名称作用域为整个类，作用域为整个类的名称只在该类中是已知的，在类外是不可知的；
&emsp;&emsp;2.要调用类的公有成员必须通过对象；
&emsp;&emsp;3.使用类成员名时，根据上下文使用运算符：成员运算符`.`,间接运算符`->`，作用域解析运算符`::`;
&emsp;&emsp;4.作用域为类的常量：
&emsp;&emsp;4.1 使用关键字`static`
&emsp;&emsp;4.2 在类中声明一个枚举: 
&emsp;&emsp;枚举格式：`enum `class\stuct` egg {Samll, Medium, Large, Jumbo};`// 未指定枚举底层类型
                     `enum `class\stuct： short ` egg {Samll, Medium, Large, Jumbo};`// 指定枚举底层类型为short类型；
&emsp;&emsp;作用域内枚举不能隐式转换为整型；
