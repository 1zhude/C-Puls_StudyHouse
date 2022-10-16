#include<iostream>

using std::cout;
using std::wcout;
using std::cin;
using std::endl;
using std::hex;

int main(int argc, char**argv)
{
    // char ch;

    //cin >> ch;
    // ch = cin.get();
    // cout << ch;
    // auto temp = 0.0;

    // cout << "temp is " << temp << endl;

    //cout << "I'd give my right arm to be " "a great violinist.\n";

    // wchar_t title[] = L"20220526";
    // char16_t name[] = u"zhouzhude";
    // char32_t car[] = U"qwertyui";

   // cout << R"+*("(who would't?)", she whispered.)+*";

    // long *fellow = NULL;
    // long
    // a = 223323;
    // fellow = &a;

    // int x = 20;
    // {
    //     cout << x << endl;
    //     int x = 100;
    //     cout << x << endl;
    // }
    // cout << x << endl;

    // double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    // 进入for循环
    // for (double x : prices)
    // {
    //     cout << x << endl;
    // }
    
    // for (double &x : prices)
    // {
    //     x = x * 0.80;
    //     cout << x << endl;
    // }

    // for (int x : {3, 5, 2, 8, 6})
    // {
    //     cout << x << " ";
    // }
    // cout << '\n';
    // for(int i = 1; i <= 64; i*=2)
    // {
    //     std::cout << i <<"、";  
    // }
    char ch;
    int ct1, ct2;

    ct1 = ct2 = 0;
    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
        {
            ct2 ++;
        }
        cout << ch;
    }
    
    cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
    system("pause");
    return 0;
}