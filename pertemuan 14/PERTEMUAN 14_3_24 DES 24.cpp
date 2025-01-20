#include <iostream>
#include <string>
#include <vector>

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
    vector<Person> people;
    char choice;

    do {
        Person person;

        cout << "Enter name: ";
        getline(cin, person.name);

        cout << "Enter age: ";
        cin >> person.age;
        cin.ignore(); // Ignore the newline character left in the buffer

        cout << "Enter address: ";
        getline(cin, person.address);

        people.push_back(person);

        cout << "Do you want to add another person? (y/n): ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer

    } while (choice == 'y' || choice == 'Y');

    cout << "\nYou have entered the following people:\n";
    for (const auto& person : people) {
        printPerson(person);
        cout << endl;
    }

    return 0;
}
