#include<iostream>

const int Max = 3;
int main(int argc, char *argv[])
{
    int var[Max] = {10, 100, 200};
    int *ptr = NULL;
    int count = 0;    

    ptr = var;

    while (ptr < &var[Max - 1])
    {
        std::cout << "Address of var[" << count << "] = " << std::endl;
        std::cout << ptr << std::endl;

        std::cout << "Value of var[" << count << "] = " << std::endl;
        std::cout << *ptr << std::endl;

        ptr ++;
        count ++;
    }
    
    system("pause");
    return 0;
}