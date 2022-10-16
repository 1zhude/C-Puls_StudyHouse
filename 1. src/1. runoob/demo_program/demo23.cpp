#include<iostream>

int main(int argc, char *argv[])
{
    char grade = 'A';

    switch(grade)
    {
        case 'A': std::cout << "great!\n";
            break;
        case 'B': std::cout << "good!\n";
            break;
        case 'C': std::cout << "pass!\n";
            break;
        case 'D': std::cout << "fail!\n";
            break;
        case 'F': std::cout << "loser!\n";
            break;
        default: std::cout << "grade not find!\n";
    }

    std::cout << "Grade is :" << grade << std::endl;
    system("pause");
    return 0;
}