# 1.
`if...else`比`if、if`代码执行效率更快;
# 2
由于`ch`是一个字符型变量，`++ch`为自增运算，因此，`++ch`为字符型变量；
而`ch + 1`为加法运算，因此在计算时会将`ch`进行整型提升；
因此，`++ch`和`ch + 1`得到数值相同，但是++ch类型为char，而ch+1为int类型；
# 3
输入：Hi！
输出：H$i$!$
输入：$Send $10 or $20 now!
输出：S$e$n$d$ $ct1 = 9, ct2 = 9
# 4
weight >= 115 && weight < 125
ch == 'q' || ch == 'Q'
(x%2 == 0) && x != 26
(x%2 == 0) && !(x%26)
(((donation >= 1000) && (donation <= 2000)) || (guest == 1))
(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
# 5
不一定，若x = 10, !x = 0, !!x = 1;若x为布尔变量 则!!x为x;
# 6
x >= 0 ? x : -x;
# 7
switch(ch)
{
    case 'A':
        a_grade++;
        break;
    case 'B':
        b_grade++;
        break;
    case 'C':
        c_grade++;
        break;
    case 'D':
        d_grade++;
        break;
    defalt:
        f_grade++;
        break;
}
# 8
如果使用整数标签，且用户输入了非整数（如q）,则程序将因为整数输入不能处理字符挂起。但是如果使用字符标签，而用户输入了整数（如5），则将5作为字符处理，执行switch的defalt语句；
# 9
```c
    int line = 0;
    char ch;
    while((cin.get(ch)) && (ch != 'Q'))
    {
       if(ch == '\n')
       {
            line++;
       }
    }
```




