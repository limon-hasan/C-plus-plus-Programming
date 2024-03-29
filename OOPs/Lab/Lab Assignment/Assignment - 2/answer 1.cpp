// (1) -->

/* Qn : ->
Problem 1: Library Management System
Create a class `Book` with attributes `title`, `author`, and `ISBN`. Implement a parameterized constructor to initialize these attributes. 
Write a destructor to display a message when a bookobject is destroyed. Create multiple book objects and demonstrate constructor and destructor calls.
Sample Input:
Book 1: Title - "Introduction to OOP", Author - "John Doe", ISBN - "123456789"
Book 2: Title - "Data Structures and Algorithms", Author - "Jane Smith", ISBN - "987654321"
*/

#include <bits/stdc++.h>
using namespace std;

class Book {

	private:
	string title;
	string author;
	string ISBN;
    
	public:

	Book(string title1, string author1, string ISBN1, int x) : title(title1), author(author1), ISBN(ISBN1) {
		cout << "Book " <<x << " created" << endl;
	}

	~Book() {
		cout << "destroyed" << endl;
	}
};

int main() {
    
	// dynamically created object 
    Book *b1 = new Book("Introduction to OOP", "John Doe", "123456789", 1);
	Book *b2 = new Book("Data Structures and Algorithms", "Jane Smith", "987654321", 2);

	int y = 1;
	cout << "Book " <<y << " ";
	delete b1;   
	int z = 2;
	cout << "Book " << z <<" ";
	delete b2; 
}

/*
Output -->
Book 1 created
Book 2 created
Book 1 destroyed
Book 2 destroyed
*/

// ---------------------------------------------------------------



// Or, 
// statically creating objects
#include <bits/stdc++.h>
using namespace std;

class Book {

    private:
    string title;
    string author;
    string ISBN;

    public:
    static int count; // this can be declared in private also  // Static counter to keep track of created books
    Book(string title, string author, string ISBN) : title(title), author(author), ISBN(ISBN) {
        count++;
        cout << "Book " << count << " " << "created" << endl;
    }

    ~Book() {
        count--;
        cout << "Book " << count  <<" "<< "destroyed" << endl;
        count++;  // // Decrement count when a book is destroyed
    } 
};

int Book :: count = 0;   // Initialize static count

int main() {

    //  Statically creating book objects
    Book book1("Introduction to OOP", "John Doe", "123456789");
    Book book2("Data Structures and Algorithms", "Jane Smith", "987654321");

    // No need to explicitly delete book objects in C++, they will be automatically destroyed when they go out of scope. Because here, objects created statically 
    return 0;
}

/*
Sample Output:
Book 1 created.
Book 2 created.
Book 1 destroyed.
Book 2 destroyed.
*/
