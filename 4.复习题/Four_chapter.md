# 4.1
```c
char actor[30] = " ";
short betsize[100] = {0};
float chuck[13] = {0.0};
long double dipsea[64] = {0.0};
```
# 4.2
```c
    #include<array>
    array<char 30> actor;
    array<short 100> betsize;
    array<float 13> chuck;
    array<long double 64> dipsea;
```
# 4.3
```c
    int array[5] = {1,3,5,7,9};
```
# 4.4
```c
    int even = array[0] + array[4];
```
# 4.5
```c
    #include<iostream>
    std::cout << ideas[1];
```
# 4.6
```c
    #include<iostream>
    char str[] = "cheeseburger";
```
# 4.7
```c
    #include<iostream>
    #include<string>
    std::string str;
    str = "Waldorf Salad";
```
# 4.8
```c
    #include<iostream>
    #include<string>
    struct fish
    {
        std::string str;
        int weight;
        double length;
    };
```

# 4.9
```c
    #include<iostream>
    struct fish fish1 = 
    {
        "fish1",
        100,
        10.12,
    };
```

# 4.10
```c
    #include<iostream>
    enum
    {
        No,
        Yes,
        Maybe,
    }; 
```

# 4.11
```c
    #include<iostream>
    double* pn = &ted;
    std::cout << *pn ;
```

# 4.12
```c
    #include<iostream>
    #include<array>

    array<float, 10> treacle;
    float* pn = treacle;
    std::cout << pn[0] << " and " << pn[9];
```


# 4.13
## new-delete
```c
    #include<iostream>
    #include<array>
    int length = 0;
    std::cout << "Please enter srrsy length:";
    std::cin >> length;
    int* pn = new int(length);
```
## vector
```c
    #include<iostream>
    #include<vector>
    int length = 0;
    std::cout << "Please enter srrsy length:";
    std::cin >> length;
    vector<int> array(length);
```
# 4.14
&emsp;&emsp;该程序打印内容应当是一个地址；

# 4.15
```c
    #include<iostream>
    #include<string>   

    using namespce std;
    struct fish
    {
        std::string str;
        int weight;
        double length;
    };    
    fish *pn = new fish;
    std::cout << pn->str << pn->weight << pn->length << std::endl;

```
# 4.16
&emsp;&emsp;cin>>Address将使得程序跳过空白，直到找到非空白字符为止。然后它读取字符，直到再遇到空白符为止。
因此，它将跳过输入后的换行符。另一方面它只能读取一个单词。

# 4.17
```c
    #include<iostream>
    #include<string>    
    #include<vector>    
    #include<array>    

    const unsigned int count = 10;

    vector<std::string> arr(count);
    array<std::string, count> arr;

```