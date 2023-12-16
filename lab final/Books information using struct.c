#include <stdio.h>
struct books
{
 char title[20];
 char author[20];
 char subject[30];
 int book_id;
};
int main()
{
 struct books book1,book2;
 strcpy(book1.title,"C Programming");
 strcpy(book1.author,"E Balagurusamy");
 strcpy(book1.subject,"CSE");
 book1.book_id=34565778;
 strcpy(book2.title,"Telecom Billing");
 strcpy(book2.author,"Zara Ali");
 strcpy(book2.subject,"Telecom Billing Tutorial");
 book2.book_id=98458707;
 printf("Book 1 title: %s\n",book1.title);
 printf("Book 1 author: %s\n",book1.author);
 printf("Book 1 subject: %s\n",book1.subject);
 printf("Book 1 book ID: %d\n",book1.book_id);
 printf("\n");
 printf("Book 2 title: %s\n",book2.title);
 printf("Book 2 author: %s\n",book2.author);
 printf("Book 2 subject: %s\n",book2.subject);
 printf("Book 2 book ID: %d\n",book2.book_id);
}
