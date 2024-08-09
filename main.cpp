#include <iostream>
#include <string>

using namespace std;

struct Animal {
	string name;
	int age;
	double weight;
};

int main() {
	setlocale(LC_ALL, "RU");

    Animal animal1 = {"Dog", 5, 10.5};
    Animal animal2 = {"Cat", 3, 5.2};
    Animal animal3 = {"Rabbit", 1, 2.5};
    Animal animal4 = {"Kangaroo", 7, 50.3};
    Animal animal5 = {"Monkey", 4, 0.1};

    cout << "Названия животных:" << endl;
    cout << animal1.name << endl;
    cout << animal2.name << endl;
    cout << animal3.name << endl;
    cout << animal4.name << endl;
    cout << animal5.name << "\n\n";

    double beforeWeight = animal1.weight;
    animal1.weight += 1.8;
    double afterWeight = animal1.weight;

    cout << "Изначальный вес: " << beforeWeight << endl;
    cout << "Текущий вес: " << afterWeight << endl;

	return 0;
}