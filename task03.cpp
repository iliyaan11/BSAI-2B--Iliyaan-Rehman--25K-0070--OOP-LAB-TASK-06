#include<iostream>
using namespace std;
class Position
{
    int x,y,z;
    public:
    void setpos(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"       Positions"<<endl<<"X: "<<x<<endl<<"Y: "<<y<<endl<<"Z: "<<z<<endl;
    }
};
class Health
{
    int hp;
    public:
    Health(){}
    void display()
    {
        cout<<"Health: "<<hp<<endl;
    }
    void sethp(int hp){this->hp=hp;}
};
class Character:public Position,public Health
{
    string abilities,action,name;
    public:
    Character(string name,string abilities,string action)
    {
        this->name=name;
        this->abilities=abilities;
        this->action=action;
    }
    void display()
    {   
        cout<<"        Characteristics"<<endl<<"Name:"<<name<<endl<<"Abilities:"<<abilities<<endl<<"Actions:"<<action<<endl;
        Position::display();
        Health::display();
    }
};
int main()
{
    Character C("Ikaris","Laser Beam","Few too close to the sun");
    C.sethp(100);
    C.setpos(25,50,75);
    C.display();
    
}