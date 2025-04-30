/*Sure! Here's the updated **20-mark application-based OOP question**, now including **exception handling** and requiring **both** virtual functions and exception handling (not optional or either/or):
 **Q: (20 Marks) – Library Management System using OOP in C++**

Design a **Library Management System** in C++ using the following guidelines:

1. **Component Diagram (4 Marks):**  
   Draw a UML **component diagram** showing the structure and relationships among the following classes:
   - `LibraryItem` (base)
   - `Book` (derived from `LibraryItem`)
   - `TextBook` (derived from `Book`)

2. **Class Design (6 Marks):**  
   Implement all three classes with:
   - Attributes (e.g., ID, title, author, subject, pages)
   - Proper constructor chaining from base to derived
   - Use of access specifiers and `protected` members where appropriate

3. **Operator Overloading (4 Marks):**  
   Overload the `+` operator to combine two `TextBook` objects (e.g., total page count).

4. **Advanced Features (6 Marks – must do both):**  
   - Use a `virtual display()` function in `LibraryItem`, overridden in `Book` and `TextBook`, to demonstrate runtime polymorphism.  
   - Implement **exception handling** to throw and catch an error (e.g., if a `TextBook` has negative page count or empty title).

In `main()`, demonstrate:
- Constructor chaining  
- Operator overloading  
- Virtual function calls  
- Proper handling of exceptions
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class LibraryItem {
protected:
    int itemID;
    string title;
    double price;
public:
    LibraryItem(int id, string t, double p) : itemID(id), title(t), price(p) {
        cout << "LibraryItem Constructor Called\n";
    }

    virtual void display() {
        cout << "ID: " << itemID << ", Title: " << title << ", Price: " << price << endl;
    }
};

// Derived class
class Book : public LibraryItem {
protected:
    string author;
    int numPages;
public:
    Book(int id, string t, double p, string a, int pages)
        : LibraryItem(id, t, p), author(a), numPages(pages) {
        cout << "Book Constructor Called\n";
    }

    void display() override {
        LibraryItem::display();
        cout << "Author: " << author << ", Pages: " << numPages << endl;
    }
};

// Further derived class
class TextBook : public Book {
    string subject;
    int edition;
public:
    TextBook(int id, string t, double p, string a, int pages, string s, int e)
        : Book(id, t, p, a, pages), subject(s), edition(e) {
        cout << "TextBook Constructor Called\n";
        if (pages < 0 || t.empty()) {
            throw invalid_argument("Invalid textbook details: negative pages or empty title.");
        }
    }

    void display() override {
        Book::display();
        cout << "Subject: " << subject << ", Edition: " << edition << endl;
    }

    // Operator overloading: + adds pages
    TextBook operator+(const TextBook& other) {
        TextBook combined = *this;
        combined.numPages += other.numPages;
        return combined;
    }
};

int main() {
    try {
        TextBook tb1(101, "OOP in C++", 450.0, "Bjarne", 300, "CS", 5);
        TextBook tb2(102, "Advanced C++", 500.0, "Stroustrup", 250, "CS", 3);

        cout << "\n--- TextBook 1 ---\n";
        tb1.display();

        cout << "\n--- TextBook 2 ---\n";
        tb2.display();

        TextBook tb3 = tb1 + tb2;
        cout << "\n--- Combined TextBook (Operator Overloading) ---\n";
        tb3.display();

        // Demonstrating exception
        cout << "\n--- Creating Invalid TextBook ---\n";
        TextBook tb4(103, "", 200.0, "Author", -50, "Math", 2);  // This will throw
    }
    catch (const exception& e) {
        cerr << "\nException caught: " << e.what() << endl;
    }

    return 0;
}
