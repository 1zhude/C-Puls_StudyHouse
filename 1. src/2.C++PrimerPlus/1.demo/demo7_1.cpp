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

void simple();

int main(int argc, char **argv)
{
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";
    
    return 0;
}

void simple()
{
    cout << "I'm but a simple function.\n";
}