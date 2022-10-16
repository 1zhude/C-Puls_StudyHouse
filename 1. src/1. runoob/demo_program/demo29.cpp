#include<iostream>
#include<string>

int main(int argc, char *argv[])
{
    std::string str1 = "runoob";
    std::string str2 = "google";
    std::string str3;
    int len;

    str3 = str1;
    std::cout << "str3 : " << str3 << std::endl;

    str3 = str1 + str2;
    std::cout << "str1 + str2 : " << str3 << std::endl;

    len = str3.size();
    std::cout << "str3.size : " << len << std::endl;

    system("pause");
    return 0;
}