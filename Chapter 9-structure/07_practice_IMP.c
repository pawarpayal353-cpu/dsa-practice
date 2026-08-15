//create a structure for library management with fields for book ID, book name, author name, issued date, and return date
#include<stdio.h>
struct Book {
    int bookID;
    char bookName[100];
    char authorName[100];
    int issuedDate;
    int returnDate;
};
int displayBookInfo(struct Book b) {
    printf("Book ID: %d\n", b.bookID);
    printf("Book Name: %s\n", b.bookName);
    printf("Author Name: %s\n", b.authorName);
    printf("Issued Date: %d\n", b.issuedDate);
    printf("Return Date: %d\n", b.returnDate);
    return 0;
}

int main() {
    struct Book b1 = {101, "C Programming", "Dennis Ritchie", 2024-01-10, 2024-02-10};
    struct Book b2 = {102, "Data Structures", "Mark Allen Weiss", 2024-01-15, 2024-02-15};
    
    printf("Book 1 Information:\n");
    displayBookInfo(b1);


    printf("Book 2 Information:\n");
    displayBookInfo(b2);
    return 0;
}

