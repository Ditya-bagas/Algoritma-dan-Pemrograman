#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person{
    int id;
    string name;
    int age;
    string department;
    float score;
};
void printPerson(const Person& person) {
    cout << "ID: " << person.id << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Department: " << person.department << endl;
    cout << "Score: " << person.score << endl;
}
int main(){
    vector<Person>people;
    char choice;
    do{
    Person person;

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

        cout << "Enter Score:";
        cin >> person.score;
        cin.ignore();

        people.push_back(person);

        cout << "Do you want to add another person? (y/n): ";
        cin >> choice;
        cin.ignore();
     } while (choice == 'y' || choice == 'Y');

    cout << "\nDetail of Students:\n";
    for (const auto& person : people) {
        printPerson(person);
        cout << endl;
    }

    return 0;
}
