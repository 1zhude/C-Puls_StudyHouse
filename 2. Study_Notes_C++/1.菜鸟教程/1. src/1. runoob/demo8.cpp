#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string greeting = "hello,runoob";
    cout << greeting;
    cout << "\n";
    //  '\'可以作为分隔符分隔一个字符串
    string greeting2 = "hello,\ 
runoob";
    cout << greeting2;

    cin.get();
    cin.get();
    return NULL;
}