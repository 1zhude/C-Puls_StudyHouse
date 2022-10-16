#include<iostream>
#include<cstring>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

void Printf_function(Books *Book1);

int main(int argc, char *argv[])
{
    Books Book1;

    strcpy((Book1.title), "C++ Primer Plus");
    strcpy((Book1.author), "Runoob");
    strcpy((Book1.subject), "program");
    Book1.book_id = 12345;

    Printf_function(&Book1);// 调用打印函数；

    system("pause");
    return 0;
}

void Printf_function(Books *Book1)
{
    std::cout << "book title: " << Book1->title << std::endl;
    std::cout << "book author: " << Book1->author << std::endl;
    std::cout << "book subject: " << Book1->subject << std::endl;
    std::cout << "book book_id: " << Book1->book_id << std::endl;
    
}