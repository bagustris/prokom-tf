#include <stdio.h>
#include <string.h>

//void printBook(struct Books);

struct Books
{
char title[50];
char author[50];
char subject[100];
int book_id;
};

int main( )
{
struct Books Book1;
struct Books Book2;
// Declare Book1 of type Book
strcpy(Book1.title, "Belajar Pemrorgraman C/C++");
strcpy(Book1.author, "Bagus Tris Atmaja");
strcpy(Book1.subject, "Bahasa Pemrograman");
Book1.book_id = 01;

// book 2 specification
strcpy( Book2.title, "Signal System");
strcpy( Book2.author, "Allan W. Oppenheim");
strcpy( Book2.subject, "System Engineering");
Book2.book_id = 02;

// Print Book info
printBook(Book1);
printBook(Book2);
return 0;
}

void printBook( struct Books book )
{
printf("Book title : %s\n", book.title);
printf("Book author : %s\n", book.author);
printf("Book subject :%s\n", book.subject);
printf("Book id : %d\n", book.book_id);
}
