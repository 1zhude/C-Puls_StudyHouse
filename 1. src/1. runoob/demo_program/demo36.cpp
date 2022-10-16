#include<iostream>
#include<ctime>

int main(int argc, char *argv[])
{
    time_t now = time(0);

    std::cout << "1970-now time is: " << now << std::endl;

    tm *localtm = localtime(&now);

    std::cout << "years : " << localtm->tm_year + 1900 << std::endl;
    std::cout << "month : " << localtm->tm_mon + 1 << std::endl;
    std::cout << "day   : " << localtm->tm_mday    << std::endl;
    std::cout << "time  : " << localtm->tm_hour    << ": ";
    std::cout << localtm->tm_hour << ": ";
    std::cout <<localtm->tm_min << std::endl;

    system("pause");
    return 0;
}