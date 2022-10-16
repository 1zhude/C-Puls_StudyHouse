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

    char temp;
    int i,j;

    for(j = 0, i = word.size() - 1; j < i; --i,++j)
    {
        temp    = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";

    //system("pause");
    return 0;
}