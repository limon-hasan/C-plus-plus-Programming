// Assignment problem:
// Single Inheritance Problem --->

/* Qn: -->
   You're tasked with developing software for a construction company. 
   Design a base class called `Shape` representing various geometric shapes used in construction, with properties like `width` and `height`. 
   Derive a class `Rectangle` from `Shape`, representing rectangular structures. 
   Implement member functions to calculate the area and perimeter of a rectangular structure. 
   Test your code by creating objects representing different rectangular structures and displaying their area and perimeter.
*/

#include <iostream>
using namespace std;

class Shape {
protected:

	int height = 3;
	int width = 4;

public:

void setHeight(int x) {
	height = x;
}

void setWidth(int y) {
	width = y;
}

};

class Rectangle : public Shape {
public:

	int area() {
		int result = this->height * this->width;
		return result;
	}

	int perimeter() {
		int result = 2 * this->height + 2 * this->width;
		return result;
	}
};

int main() {

	Rectangle r1;
	Rectangle r2;

	cout << "Height = "<< endl;
	int p;
	cin >> p;

	cout <<"Width = " << endl;
	int q;
	cin >> q;

	r1.setHeight(p);
	r2.setWidth(q);

	int result1 = r1.area();
	cout <<"Area = " << result1 << endl;
	int result2 = r2.perimeter();
	cout <<"Perimeter = " <<result2 << endl;

}



// ================================


// Or:-->

#include <iostream>
using namespace std;

class Shape {

protected:
	int height;
	int width;

public:
	void setData(int height, int width) {
		this->height = height;
		this->width = width;
	}

};

class Rectangle : public Shape {

public:

	int area() {
		int result = this->height * this->width;
		return result;
	}

	int perimeter() {
		int result = 2 * this->height + 2 * this->width;
		return result;
	}
};

int main() {

	Rectangle r;
	cout << "Height of a Rectangle: " << endl;
	int h1;
	cin >> h1;
	cout << "Width of a Rectangle: "<< endl;
	int w1;
	cin >> w1;

	r.setData(h1, w1);

	int result = r.area();
 	cout << "The area of the Rectangle: " << result << endl;

	int result2 = r.perimeter();
	cout << "The perimeter of the Rectangle: "<< result2<< endl;
}
