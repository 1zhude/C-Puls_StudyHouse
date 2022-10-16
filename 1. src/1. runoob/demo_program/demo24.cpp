#include<iostream>

int main(int argc, char *argv[])
{
    int a(100);
    int b(200);

    switch (a)
    {
        case 100:
            std::cout << "this is first switch\n";
            switch (b)
            {
                case 200:
                    std::cout << "this is second switch\n";
                    break;
                
                default:
                    break;
            }
            break;
        
        default:
            break;
    }

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    system("pause");
    return 0;
}