#include<iostream>
using namespace std;

class Character
{
protected:
    int health;
    int damage;

public:
    Character(int h=100,int d=10)
    {
        health=h;
        damage=d;
    }

    void display()
    {
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Enemy:public Character
{
public:
    Enemy(int h,int d):Character(h,d){}

    void display()
    {
        cout<<"Enemy Stats"<<endl;
        Character::display();
    }
};

class Player:public Character
{
public:
    Player(int h,int d):Character(h,d){}

    void display()
    {
        cout<<"Player Stats"<<endl;
        Character::display();
    }
};

class Wizard:public Player
{
    int magicPower;
    string spell;

public:
    Wizard(int h,int d,int mp,string s):Player(h,d)
    {
        magicPower=mp;
        spell=s;
    }

    void display()
    {
        cout<<"Wizard Stats"<<endl;
        Player::display();
        cout<<"Magic Power: "<<magicPower<<endl;
        cout<<"Spell: "<<spell<<endl;
    }
};

int main()
{
    Wizard w(120,25,80,"Fireball");
    w.display();
    
}