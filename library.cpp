#include <iostream>
using namespace std;

// Define the Book class
class Book {
private:
    string author, title, publisher;
    int acc_no, copies;
    double price;

public:
    // Default constructor
    Book() : acc_no(0), copies(0), price(0.0) {}

    // Function to input book details
    void inputBook() {
        cout << "Enter Accession Number: ";
        cin >> acc_no;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Publisher: ";
        getline(cin, publisher);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Copies: ";
        cin >> copies;
    }

    // Function to display book details
    void displayBook() const {
        cout << "\nAccession No: " << acc_no
             << "\nTitle: " << title
             << "\nAuthor: " << author
             << "\nPublisher: " << publisher
             << "\nPrice: $" << price
             << "\nCopies: " << copies
             << "\n------------------------------\n";
    }

    // Getter for accession number
    int getAccNo() const {
        return 0;
    }
};

// Driver program (main function)
int main() {
    const int MAX_BOOKS = 100; // Fixed array size
    Book library[MAX_BOOKS];   // Array of books
    int bookCount = 0;
    int choice;

    do {
        cout << "\nLibrary Database Menu:\n"
             << "1. Add a new book\n"
             << "2. Display all books\n"
             << "3. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            if (bookCount < MAX_BOOKS) {
                library[bookCount].inputBook();
                bookCount++;
                cout << "Book added successfully!\n";
            } else {
                cout << "Library is full! Cannot add more books.\n";
            }

        } else if (choice == 2) {
            if (bookCount == 0) {
                cout << "No books in the database.\n";
            } else {
                cout << "\nList of Books in the Library:\n";
                for (int i = 0; i < bookCount; i++) {
                    library[i].displayBook();
                }
            }
        }

    } while (choice != 3);

    cout << "Exiting program...\n";
    return 0;
}