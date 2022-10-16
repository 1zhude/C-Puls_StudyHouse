#include<iostream>

using namespace std;

#define MODE_FLAG         0

# if MODE_FLAG
#define Length 10
#define width 5
#define NEWKINE '\n'

int main(int argc,char *argv[])
{
    int area;
    area = Length * width;
    cout << area;
    cout << NEWKINE;

    cin.get();
    cin.get();
    return NULL;
}
# else 
int main(int argc,char *argv[])
{
    int area;
    const int Length = 10;
    const int width = 10;
    const char NEWKINE = '\n';

    area = Length * width;
    cout << area;
    cout << NEWKINE;

    cin.get();
    cin.get();
    return 0;
}
# endif 
