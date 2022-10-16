#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;

int main(int argc, char **argv)
{
    const int Size = 20;
    char name1[Size];
    char dessert[Size]; 

    cout << "Enter your name:\n";
    cin.get(name1, Size).get();// 从输入流读取一行数据
    cout << "Enter your favorite dessert:\n";  
    cin.get(dessert, Size).get();// 从输入流读取一行数据

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name1 << ".\n";

    system("pause");
    return 0;
}