#include<iostream>

int main(int argc, char *argv[])
{
    char c;
    bool isChar;
    int isLower, isUpper;

    std::cout << "Input a char" << std::endl;
    std::cin >> c;

    // 判断是否为元音
    isChar = ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'));
    if (isChar)
    {
        isLower = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
        isUpper = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
        if (isLower || isUpper)
        {
            std::cout << c << " Yuan yin\n";
        }
        else
        {
            std::cout << c << " Fu yin\n";
        }
    }
    else
    {
        std::cout << "Input error!!!!!!!!\n";
    }

    system("pause");
    return 0;
}