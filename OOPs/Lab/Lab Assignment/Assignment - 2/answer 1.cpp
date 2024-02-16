// (1) -->
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
