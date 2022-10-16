#include<iostream>

using namespace std;
/*
int main(int argc, char *argv[])
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << " i = " << i << endl;
    }
    
    system("pause");
    return 0;
}
*/
int my_array[5] = {1, 2, 3, 4, 5};
int main(int argc, char *argv[])
{
    for (int& i : my_array)
    {
       cout << "i = " << i << endl;
    }
    
    system("pause");
    return 0;  
}