#include <iostream>
using namespace std;

class Animal {
	public:
	Animal(const string& n): name(n) {}
	const string name;
};

class Cat: public Animal {
	public:
	
	Cat(const string& cat_name) : Animal(cat_name) {}
	
	void Meow() {
		cout << cat_name << " says: meow!" << endl;
	}
};

int main() {
 	const string cat = "1.5-shka";
	Cat cat;
	cat.Meow();
	return 0;
}

