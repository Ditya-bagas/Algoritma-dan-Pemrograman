#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>

using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

void printPersonToConsole(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
    cout << "-----------------------" << endl;
}

void printPersonToFile(ofstream& file, const Person& person) {
    file << "Name: " << person.name << endl;
    file << "Age: " << person.age << endl;
    file << "Address: " << person.address << endl;
    file << "-----------------------" << endl;
}

bool isValidAge(int age) {
    return age >= 0;
}

bool isValidString(const string& input) {
    return !input.empty();
}

int main() {
    vector<Person> people;
    char choice;

    do {
        Person person;

        // Input Name
        while (true) {
            cout << "Enter name: ";
            getline(cin, person.name);
            if (isValidString(person.name)) {
                break;
            }
            cout << "Error: Name cannot be empty. Please try again.\n";
        }

        // Input Age
        while (true) {
            cout << "Enter age: ";
            cin >> person.age;

            if (cin.fail()) {
                // Jika input bukan angka
                cout << "Error: Please enter a valid integer for age.\n";
                cin.clear(); // Membersihkan error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input sebelumnya
            } else if (!isValidAge(person.age)) {
                cout << "Error: Age cannot be negative. Please try again.\n";
            } else {
                cin.ignore(); // Mengabaikan karakter newline
                break;
            }
        }

        // Input Address
        while (true) {
            cout << "Enter address: ";
            getline(cin, person.address);
            if (isValidString(person.address)) {
                break;
            }
            cout << "Error: Address cannot be empty. Please try again.\n";
        }

        // Tambahkan data ke vector
        people.push_back(person);

        // Tanya apakah ingin menambahkan data lagi
        while (true) {
            cout << "Do you want to add another person? (y/n): ";
            cin >> choice;
            cin.ignore(); // Mengabaikan karakter newline
            if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') {
                break;
            }
            cout << "Error: Please enter 'y' for yes or 'n' for no.\n";
        }

    } while (choice == 'y' || choice == 'Y');

    // Membuka file output
    ofstream outFile("people_data.txt");
    if (!outFile) {
        cerr << "Error: Could not open file for writing.\n";
        return 1;
    }

    // Cetak semua data ke console dan file
    cout << "\nYou have entered the following people:\n";
    for (const auto& person : people) {
        printPersonToConsole(person); // Cetak ke console
        printPersonToFile(outFile, person); // Simpan ke file
    }

    // Tutup file
    outFile.close();
    cout << "\nAll data has been saved to 'people_data.txt'.\n";

    return 0;
}
