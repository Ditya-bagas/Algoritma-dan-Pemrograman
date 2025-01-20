#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure to store person details
struct Person {
    int id;
    string name;
    int age;
    string department;
    float score;
};

// Function to print person details
void printPerson(const Person& person) {
    cout << "ID: " << person.id << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Department: " << person.department << endl;
    cout << "Score: " << person.score << endl;
}

int main() {
    vector<Person> people;
    const int totalStudents = 5; // Fixed number of students

    // Input details for each student
    for (int i = 0; i < totalStudents; ++i) {
        Person person;

        cout << "Enter details for student " << i + 1 << ":\n";

        cout << "Enter ID: ";
        cin >> person.id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, person.name);

        cout << "Enter Age: ";
        cin >> person.age;
        cin.ignore();

        cout << "Enter Department: ";
        getline(cin, person.department);

        cout << "Enter Score: ";
        cin >> person.score;
        cin.ignore();

        // Add person to the vector
        people.push_back(person);
        cout << endl;
    }

    // Display all students' details
    cout << "Details of Students:\n";
    for (const auto& person : people) {
        printPerson(person);
        cout << endl;
    }

    return 0;
}
