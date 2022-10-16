#include<iostream>

const int SIZE = 10;
class safearay
{
    private:
        int array[SIZE];
    public:
        safearay();

    int& operator[](int i)
    {
        if (i >= SIZE)
        {
            std::cout << "array error" << std::endl;
            return array[0];
        }
        return array[i];
    }
};
safearay::safearay(void)
{
    register int i;
    for (i = 0; i < SIZE; i++)
    {
        array[i] = i;
    }  
}


int main(int agrc, char *argv[])
{
    safearay A;

    std::cout << "A[2]  = " << A[2] << std::endl;
    std::cout << "A[5]  = " << A[5] << std::endl;
    std::cout << "A[12] = " << A[12] << std::endl;

    system("pause");
    
    return 0;
}