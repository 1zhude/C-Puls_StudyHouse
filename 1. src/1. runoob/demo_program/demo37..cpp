#include<iostream>

int main(int argc, char *argv[])
{
    char str[] = "Unable to read.....";
    std::cerr << "Error message : " << str << std::endl;
    
    system("pause");
    return 0;
}