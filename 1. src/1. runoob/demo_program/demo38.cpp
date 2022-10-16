#include<iostream>

int main(int argc, char *argv[])
{
    char str[] = "Unable to read....";
    std::clog << "Error message : " << str << std::endl;
    
    system("pause");
    return 0;
}