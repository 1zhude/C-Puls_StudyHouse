#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>
#include<fstream>
#include<cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;
using std::ofstream;
using std::ifstream;
using std::fixed;

const int Asize = 8;
// 函数声明
int sum_arr(int arr[], int n);

int main(int argc, char **argv)
{
    int cookies[Asize] = {1,2,4,8,16,32,64,128};
    cout << cookies << " = array address, ";
    cout << sizeof(cookies) << " = sizeof cookies\n";// 计算数组字节长
  
    int sum = sum_arr(cookies, Asize);
    cout << "Total cookies eaten: " << sum << "\n";
    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate: " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);
    cout << "Last four eaters ate: " << sum << " cookies.\n"; 
 
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    cout << arr << " = arr, ";
    cout << sizeof(arr) << " = sizeof arr\n";// 显示指针字节长

    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }
    return total;

}