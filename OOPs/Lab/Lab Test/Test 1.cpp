// Write the code based on the following output : 

// process - 1
#include <bits/stdc++.h>
using namespace std;

class Product {
	public:
	int productId;
	string productName;
	double price;
	int quantityInStock;

	Product(int productId1, string productName1, double price1, int quantityStock1) {
		productId = productId1;
		productName = productName1;
		price = price1;
		quantityInStock = quantityStock1;
	}
	void print(int p) {
		cout << "Product " << p <<" "<< "Information: " << endl;
		cout << "ID : "<< productId << endl;
		cout << "Name : " << productName << endl;
		cout << "Price : " << "$"<< price << endl;
		cout << "Quanitity in Stock : " << quantityInStock << endl << endl ;
	}

	void update(int y, int z) {
		cout << "Updating stock for Product "<< y <<": " << "+" << z <<" "<< "units" << endl << endl; 
		quantityInStock = quantityInStock + z;
	    cout << "Product " << y <<" Information "<< "after update: "<< endl;
	} 
};


int main() {
	Product p1(101, "Laptop", 1200.50, 10);
	p1.print(1);
	Product p2(102, "Headphones", 50.75, 50);
	p2.print(2);

	// updating stock
	p1.update(1, 5);
	p1.print(1);
}

/*  Output :

Product 1 Information : 
ID : 101
Name : Laptop
Price : $1200.5
Quanitity in Stock : 10

Product 2 Information : 
ID : 102
Name : Headphones
Price : $50.75
Quanitity in Stock : 50

Updating stock for Product 1: +5 units

Product 1 Information after update: 
ID : 101
Name : Laptop
Price : $1200.5
Quanitity in Stock : 15

*/


// ------------------------------------------------------------------------------------------------------



// process - 2
#include <bits/stdc++.h>
using namespace std;

class Product {
	public:
	int productId;
	string productName;
	double price;
	int quantityInStock;

	Product(int productId1, string productName1, double price1, int quantityStock1) {
		productId = productId1;
		productName = productName1;
		price = price1;
		quantityInStock = quantityStock1;
	}
	void print() {
		cout << "ID : "<< productId << endl;
		cout << "Name : " << productName << endl;
		cout << "Price : " << "$"<< price << endl;
		cout << "Quanitity in Stock : " << quantityInStock << endl << endl ;
	}

	void update(int y) {
		cout << "Updating stock for Product 1: " << "+" << y <<" "<< "units" << endl << endl; 
		quantityInStock = quantityInStock + y;
	    cout << "Product " << "1" <<" Information "<< "after update: "<< endl;
	} 
};


int main() {
	Product p1(101, "Laptop", 1200.50, 10);
	cout << "Product " << "1" <<" Information : "<< endl;
	p1.print();
	Product p2(102, "Headphones", 50.75, 50);
	cout << "Product " << "2" <<" Information : "<< endl;
	p2.print();
    

	// updating stock
	p1.update(5);
	// cout << "Product " << "1" <<" Information "<< "after update: "<< endl;
	p1.print();
}



// ***************************************************************************************************************************************************************************



// process - 3
#include <bits/stdc++.h>
using namespace std;

class Product {
	public:
	int productId;
	string productName;
	double price;
	int quantityInStock;

	Product(int productId1, string productName1, double price1, int quantityStock1) {
		productId = productId1;
		productName = productName1;
		price = price1;
		quantityInStock = quantityStock1;
	}
	void print() {
		cout << "ID : "<< productId << endl;
		cout << "Name : " << productName << endl;
		cout << "Price : " << "$"<< price << endl;
		cout << "Quanitity in Stock : " << quantityInStock << endl << endl ;
	}

	void update(int y) {
		quantityInStock = quantityInStock + y;
	} 
};


int main() {
	Product p1(101, "Laptop", 1200.50, 10);
	cout << "Product " << "1" <<" Information : "<< endl;
	p1.print();
	Product p2(102, "Headphones", 50.75, 50);
	cout << "Product " << "2" <<" Information : "<< endl;
	p2.print();
    

	// updating stock
	p1.update(5);
	cout << "Updating stock for Product 1: " << "+" << "5" <<" "<< "units" << endl << endl; 
	cout << "Product " << "1" <<" Information "<< "after update: "<< endl;
	p1.print();
}


/*  Output :

Product 1 Information : 
ID : 101
Name : Laptop
Price : $1200.5
Quanitity in Stock : 10

Product 2 Information : 
ID : 102
Name : Headphones
Price : $50.75
Quanitity in Stock : 50

Updating stock for Product 1: +5 units

Product 1 Information after update: 
ID : 101
Name : Laptop
Price : $1200.5
Quanitity in Stock : 15

*/
