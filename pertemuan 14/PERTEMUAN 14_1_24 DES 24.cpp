#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

void printPerson(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
}

int main() {
    Person person1;

    person1.name = "John Doe";
    person1.age = 30;
    person1.address = "123 Main St, Anytown, USA";

    printPerson(person1);

return 0;
}
