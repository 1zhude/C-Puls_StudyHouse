// 头文件声明
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
#include<cmath>
// 名称空间声明
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

string version1(const string & s1,   const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main(int argc, char **argv)
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl; 
    cout << "Your original string: " << input << endl; 

    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl; 
    cout << "Your original string: " << input << endl; 

    cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "Your string enhanced: " << result << endl; 
    cout << "Your original string: " << input << endl; 

    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

// 返回值为一个引用
const string & version3(string & s1, const string & s2)
{
    string temp;
    
    temp = s2 + s1 + s2;
    return temp;// 该引用为一个局部变量的引用
}