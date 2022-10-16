#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include <vector>
#include <array>
#include<climits>
#include<cctype>

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
    cout << "Enter text for analysis, and type @ "
    " to terminate input.\n";

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars  = 0;
    int punct  = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
        {
            chars++;
        }
        else if (isspace(ch))
        {
            whitespace++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ispunct(ch))
        {
            punct++;
        }
        else
        {
            others++;  
        }
        cin.get(ch);
    }
    
    cout << chars << " letters, "
    << whitespace << " whitespace, "
    << digits     << " digits, "
    << punct      << " punctuation, "
    << others     << " others.\n";
   
    return 0;
}

