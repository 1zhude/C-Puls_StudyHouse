#include<iostream>
#include<ctime>
#include<cstdlib>

int main(int argc, char *argv[])
{
    unsigned int Number = 0;
    unsigned int seek;

    seek = time(NULL);

    srand(seek);

    for (size_t i = 0; i < 10; i++)
    {
        Number = rand();
        std::cout << "Number is : " << Number << std::endl;
    }
    
    system("pause");
    return 0;
}