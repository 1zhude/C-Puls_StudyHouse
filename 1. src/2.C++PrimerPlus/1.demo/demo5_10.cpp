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
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }
   
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }
    
    //system("pause");
    return 0;
}