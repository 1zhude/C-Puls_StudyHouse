#include<iostream>

int main(int argc, char *argv[])
{
    float n1,n2,n3;

    std::cout << "Please input three float numbers: " << std::endl;
    std::cin >> n1 >> n2 >> n3;

    // 判断三个数中的最大值
    if (n1 >= n2 && n1 >= n3)
    {
        std::cout << "Max: " << n1 << std::endl;
    }
    if (n2 >= n1 && n2 >= n3)
    {
        std::cout << "Max: " << n2 << std::endl;
    }
    if (n3 >= n2 && n3 >= n1)
    {
        std::cout << "Max: " << n3 << std::endl;
    }

    system("pause");
    return 0;
}