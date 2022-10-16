#include<iostream>
#include<cstring>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main(int argc, char *argv[])
{
    Books Book1;
    Books Book2;

    strcpy(Book1.title, "C++ Primer Plus");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "program");
    Book1.book_id = 12345;

    std::cout << "book title: " << Book1.title << std::endl;
    std::cout << "book author: " << Book1.author << std::endl;
    std::cout << "book subject: " << Book1.subject << std::endl;
    std::cout << "book book_id: " << Book1.book_id << std::endl;

    system("pause");
    return 0;
}