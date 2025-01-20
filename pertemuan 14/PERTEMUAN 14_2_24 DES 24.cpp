#include <iostream>
#include <string>

// Use the standard namespace to avoid the need to prefix with std::
using namespace std;

struct Person {
    string name;
    int age;
    string address;
    string job;
};

void printPerson(const Person& person) {
    cout << "===================================="<< endl;
    cout << "           your Identity            "<<endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
    cout << "Job:"<< person.job << endl;
    cout << "===================================="<< endl;
}

int main() {
    // Create an instance of Person
    Person person1;

    // Prompt the user to input values for the fields of person1
    cout << "Enter name: ";
    getline(cin, person1.name);

    cout << "Enter age: ";
    cin >> person1.age;
    cin.ignore(); // Ignore the newline character left in the buffer

    cout << "Enter address: ";
    getline(cin, person1.address);

    cout << "Enter job: ";
    getline(cin, person1.job);


    printPerson(person1);

    return 0;
}
