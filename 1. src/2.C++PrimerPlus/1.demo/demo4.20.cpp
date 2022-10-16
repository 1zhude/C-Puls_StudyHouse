#include<iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::oct;
using std::ios_base;
using std::string;

int main(int argc, char **argv)
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char *ps;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "Enter a kind of ainmal: ";
    cin>> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout<< animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
    
    system("pause");
    return 0;
}