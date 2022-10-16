#include<iostream>
#include<string>

int main(int argc, char *argv[])
{
    int myNum = 5;
    float myFloatNum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'D';
    bool myBoolean = true;
    std::string myString = "Runoob";

    std::cout << "int: "      << myNum       << "\n";
    std::cout << "float: "    << myFloatNum  << "\n";
    std::cout << "double: "   << myDoubleNum << "\n";
    std::cout << "char: "     << myLetter    << "\n";
    std::cout << "bool: "     << myBoolean   << "\n";
    std::cout << "myString: " << myString    << "\n";

    system("pause");
    return 0;
}