#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string fullName;
    int age;
    Person(string name, int yrs) : fullName(name), age(yrs) {}
};
class Student : virtual public Person {
public:
    string studentID;
    int gradeLevel;
    Student(string name, int yrs, string id, int grade) 
        : Person(name, yrs), studentID(id), gradeLevel(grade) {}
};
class Teacher : virtual public Person {
public:
    string subject;
    int roomNumber;
    Teacher(string name, int yrs, string sub, int room) 
        : Person(name, yrs), subject(sub), roomNumber(room) {}
};
class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string name, int yrs, string id, int grade, string sub, int room)
        : Person(name, yrs), Student(name, yrs, id, grade), Teacher(name, yrs, sub, room) {}
    void display() {
        cout << "\n--- Graduate Student Profile ---" << endl;
        cout << "Name: " << fullName << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << studentID << endl;
        cout << "Grade: " << gradeLevel << endl;
        cout << "Subject Taught: " << subject << endl;
        cout << "Room: " << roomNumber << endl;
    }
};
int main() {
    string name, id, subject;
    int age, grade, room;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Grade Level: ";
    cin >> grade;
    cout << "Enter Teaching Subject: ";
    cin.ignore();
    getline(cin, subject);
    cout << "Enter Room Number: ";
    cin >> room;
    GraduateStudent grad(name, age, id, grade, subject, room);
    grad.display();
    return 0;
}
