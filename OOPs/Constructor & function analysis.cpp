#include <iostream>
using namespace std;

class Hero {

	// properties
private:
	int health;

public:
	char level;

	Hero() {
		cout << "Constructor called" << endl; 
	}
	/* When we create constructor our own then the in-built constructor of the compiler/system will be removed automatically  */
	void hi() {
		cout <<"What's up" << endl;
	}

	string name;
	int roll;

    string name1;

	void print(char ch, int a) {
		level = ch;
		health = a;
		cout << "My account " << level <<" " << health << endl;   // My account A 400
	}
	int result(int rol) {
		roll = rol;
		// cout << "My roll = "<< roll < endl;
		return roll;
	}

	void final(int rol) {
		roll = rol;
		cout << "My roll = "<< roll << endl;
	}

	void printName(string namee) {
		name1 = namee;
		cout << "Bye" <<" " << name1 << endl;
	}

	// There is multiple variable to return that's why i use pair to return. I can also use class
	pair<pair<string, string>, int> printNam(string nam, string namm, int rol) {
		name1 = nam;
		name = namm;
		roll = rol;
		return make_pair(make_pair(name1, name), roll);
	}
    
};


int main() {
    
    // object created statically
	Hero rakib;

	// dynamically created object
	Hero *h = new Hero;  // For int data type it will be like -> int *a = new int
    // It could be written this way as well -> Hero *h = new Hero();
    
    
    (*h).name = "Tahsin";
    cout << h->name << endl;  // Tahsin
    cout << (*h).name << endl;  // Tahsin

    rakib.hi();
    (*h).print('A', 400);
    h->print('A', 400);


    Hero *h1 = new Hero();  // prints the constructor
    (*h1).result(90);  // calling result function
    cout << "My roll = " << (*h1).roll << endl;  // 90

    (*h1).roll;
    cin >> h1->roll;  // taking input from user   // cin >> (*h1).roll; -> It could be written this way as well
    
    h1->final((*h1).roll);  // calling final function  // (*h1).final((*h1).roll)  is also valid

    
    Hero s1;
    Hero s2;
    s2.name1;
    cin >> s2.name1;
    s2.printName(s2.name1);
    s2.name = "Asif";
    s2.printName("Asif");

    pair<pair<string, string>, int> value = s2.printNam("sakib", "sikdar", 99);  // return pair that'why variables data type should be pair data type
    
    cout << value.second << endl; // 99
    cout << value.first.first << endl;  // sakib
    cout << value.first.second << endl;  // sikder

}
