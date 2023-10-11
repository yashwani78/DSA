#include <iostream>
using namespace std;

class human {
	public:
	string name;
	int age;
	human(string name, int age) {
		this -> name = name;
		this -> age = age;
	}
};

int main() {
	human person1("Gunjan", 23);
	std::string naam = person1.name;
	cout << naam << endl;
	cout << person1.age << endl;
	return 0;
}