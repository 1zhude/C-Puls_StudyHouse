#include<iostream>
#include<exception>

struct MyException : public std::exception
{
    const char * what() const throw()
    {
        return "C++ Exception";
    }
};

int main(int argc, char *argv[])
{
    try
    {
        throw MyException();
    }
    catch(MyException & e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(const std::exception& e)
    {
        
    }

    system("pause");
    return 0;
}