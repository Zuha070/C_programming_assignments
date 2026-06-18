#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int available;   // 1 = available, 0 = issued
};

struct Student {
    int studentId;
    char name[50];
};

struct Book books[100] = {
    {101,"C Programming","Dennis Ritchie",1},
    {102,"Data Structures","Schaum",1},
    {103,"Operating Systems","Galvin",1},
    {104,"Computer Networks","Tanenbaum",1},
    {105,"DBMS","Korth",1},
    {106,"Java Programming","Herbert Schildt",1},
    {107,"Python Basics","Mark Lutz",1},
    {108,"Digital Logic","Morris Mano",1},
    {109,"Computer Organization","Carl Hamacher",1},
    {110,"Software Engineering","Pressman",1},

    {111,"Discrete Mathematics","Rosen",1},
    {112,"Calculus","Thomas",1},
    {113,"Linear Algebra","Gilbert Strang",1},
    {114,"Engineering Physics","Arthur Beiser",1},
    {115,"Engineering Chemistry","Jain",1},
    {116,"Basic Electronics","Boylestad",1},
    {117,"Electrical Circuits","Alexander",1},
    {118,"Communication Skills","Raman",1},
    {119,"Environmental Science","Benny Joseph",1},
    {120,"Artificial Intelligence","Elaine Rich",1},

    {121,"Machine Learning","Tom Mitchell",1},
    {122,"Cloud Computing","Rajkumar Buyya",1},
    {123,"Cyber Security","William Stallings",1},
    {124,"Web Development","Jon Duckett",1},
    {125,"HTML and CSS","Jon Duckett",1},
    {126,"JavaScript Basics","David Flanagan",1},
    {127,"PHP Programming","Welling",1},
    {128,"MySQL Basics","Paul DuBois",1},
    {129,"Android Development","Reto Meier",1},
    {130,"Flutter Basics","Google Team",1},

    {131,"Theory of Computation","Hopcroft",1},
    {132,"Compiler Design","Aho",1},
    {133,"Computer Graphics","Hearn Baker",1},
    {134,"Numerical Methods","Sastry",1},
    {135,"Probability","Sheldon Ross",1},
    {136,"Statistics","Gupta",1},
    {137,"Microprocessor","Ramesh Gaonkar",1},
    {138,"Unix Programming","Stevens",1},
    {139,"Linux Basics","Sobell",1},
    {140,"Object Oriented Programming","Balagurusamy",1},

    {141,"C Plus Plus","Bjarne Stroustrup",1},
    {142,"Advanced C","Yashavant Kanetkar",1},
    {143,"Let Us C","Yashavant Kanetkar",1},
    {144,"Algorithms","CLRS",1},
    {145,"Database Systems","Elmasri",1},
    {146,"Networking Basics","Forouzan",1},
    {147,"Information Security","Stallings",1},
    {148,"Big Data","Viktor Mayer",1},
    {149,"Internet of Things","Arshdeep Bahga",1},
    {150,"Mobile Computing","Raj Kamal",1}
};

struct Student students[50] = {
    {1,"Musa"},
    {2,"Ali"},
    {3,"Aamir"},
    {4,"Faizan"},
    {5,"Umar"},
    {6,"Sameer"},
    {7,"Danish"},
    {8,"Irfan"},
    {9,"Zaid"},
    {10,"Bilal"},
    {11,"Adil"},
    {12,"Sahil"},
    {13,"Rayees"},
    {14,"Tahir"},
    {15,"Nadeem"},
    {16,"Arif"},
    {17,"Imran"},
    {18,"Yasir"},
    {19,"Basit"},
    {20,"Owais"}
};

int totalBooks = 50;
int totalStudents = 20;

void displayBooks() {
    printf("\n----- Book List -----\n");

    for (int i = 0; i < totalBooks; i++) {
        printf("\nBook ID: %d", books[i].bookId);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s", books[i].author);

        if (books[i].available == 1)
            printf("\nStatus: Available\n");
        else
            printf("\nStatus: Issued\n");
    }
}

void displayStudents() {
    printf("\n----- Student List -----\n");

    for (int i = 0; i < totalStudents; i++) {
        printf("\nStudent ID: %d", students[i].studentId);
        printf("\nName: %s\n", students[i].name);
    }
}

void addBook() {
    int n;

    printf("How many books do you want to add? ");
    scanf("%d", &n);

    if (totalBooks + n > 100) {
        printf("Cannot add. Maximum 100 books allowed.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &books[totalBooks].bookId);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", books[totalBooks].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", books[totalBooks].author);

        books[totalBooks].available = 1;
        totalBooks++;

        printf("Book added successfully.\n");
    }
}

void searchBook() {
    int id, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < totalBooks; i++) {
        if (books[i].bookId == id) {
            printf("\nBook Found!\n");
            printf("Book ID: %d\n", books[i].bookId);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);

            if (books[i].available == 1)
                printf("Status: Available\n");
            else
                printf("Status: Issued\n");

            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Book not found.\n");
    }
}

void issueBook() {
    int bookId, studentId;
    int bookFound = 0, studentFound = 0;
    int bookIndex = -1;

    printf("Enter Book ID to issue: ");
    scanf("%d", &bookId);

    printf("Enter Student ID: ");
    scanf("%d", &studentId);

    for (int i = 0; i < totalStudents; i++) {
        if (students[i].studentId == studentId) {
            studentFound = 1;
            break;
        }
    }

    if (studentFound == 0) {
        printf("Student not found.\n");
        return;
    }

    for (int i = 0; i < totalBooks; i++) {
        if (books[i].bookId == bookId) {
            bookFound = 1;
            bookIndex = i;
            break;
        }
    }

    if (bookFound == 0) {
        printf("Book not found.\n");
        return;
    }

    if (books[bookIndex].available == 1) {
        books[bookIndex].available = 0;
        printf("Book issued successfully.\n");
    } else {
        printf("Book is already issued.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Display Books\n");
        printf("2. Display Students\n");
        printf("3. Add Book\n");
        printf("4. Search Book\n");
        printf("5. Issue Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayBooks();
        }
        else if (choice == 2) {
            displayStudents();
        }
        else if (choice == 3) {
            addBook();
        }
        else if (choice == 4) {
            searchBook();
        }
        else if (choice == 5) {
            issueBook();
        }
        else if (choice == 6) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}