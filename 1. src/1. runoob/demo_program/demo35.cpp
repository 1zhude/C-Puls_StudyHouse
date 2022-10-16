#include<iostream>
#include<ctime>

int main(int argc, char *argv[])
{
    time_t now = time(0);
    char *dt = ctime(&now);
    std::cout << "time_t data is : "<< dt << std::endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    std::cout << "tm data is : "<< dt << std::endl;

    system("pause");
    return 0;
}