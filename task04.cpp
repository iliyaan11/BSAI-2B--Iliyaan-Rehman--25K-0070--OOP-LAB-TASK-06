#include<iostream>
using namespace std;
class Person
{
    string name;int age;
    public:
    void setperson(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
class Student:virtual public Person
{
    int sid,gradelevel;
    public:
    void setstudent(int sid,int gradelevel)
    {
        this->sid=sid;
        this->gradelevel=gradelevel;
    }
    void display()
    {
        Person::display();
        cout<<"Student ID:"<<sid<<endl<<"Grade Level"<<gradelevel<<endl;
    }
};
class Teacher:virtual public Person
{
    string subject;int room;
    public:
    void setteach(string subject,int room)
    {
        this->subject=subject;
        this->room=room;
    }
    void display()
    {
        
        cout<<"Subject: "<<subject<<endl<<"Room Number:"<<room<<endl;
    }
};
class GraduateStudents:public Student,public Teacher
{
    public:
    void display()
    {
        Student::display();
        Teacher::display();
    }
};
int main()
{
    GraduateStudents G;
    G.setperson("Hussain",18);
    G.setstudent(0047, 9);
    G.setteach("Math",20);
    G.display();

}