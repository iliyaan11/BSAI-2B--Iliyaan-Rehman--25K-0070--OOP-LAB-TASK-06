#include<iostream>
using namespace std;
class Book
{
    string title,author,publisher;
    public:
    Book(string t="The night riders",string a="Percy Jackson",string p="Hussain"):title(t),author(a),publisher(p){}
    void display()
    {
        cout<<endl<<"Title: "<<title<<endl<<"Author: "<<author<<endl<<"Publisher: "<<publisher;
    }
};
class FicBook:public Book
{
    string genre;
    public:
    FicBook(string g="Unknown",string t="XXX",string a="Anonymous",string p="ABC"):Book(t,a,p),genre(g)
    {
        
    }
    void display()
    {
        Book::display();
        cout<<endl<<"Genre: "<<genre;
    }
};
int main()
{
    FicBook f;
    f.display();

}