#include<iostream>
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
    cout << "Enter a word: ";
    string word;
    cin >> word;

    for(int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << "\nBye.\n";
    //system("pause");
    return 0;
}