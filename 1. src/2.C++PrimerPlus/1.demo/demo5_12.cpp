#include<iostream>
#include<cstring>
#include<string>
#include <vector>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;
using std::vector;
using std::array;

int main(int argc, char **argv)
{
    //char word[5] = "?ate";
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "After loop ends, word is " << word << endl;
    //system("pause");
    return 0;
}