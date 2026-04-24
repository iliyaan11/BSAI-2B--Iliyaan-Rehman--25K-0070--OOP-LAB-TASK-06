
#include<iostream>
using namespace std;

class Vehicle
{
protected:
    string make, model;
    int year;

public:
    Vehicle(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    void displayVehicle()
    {
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

class Car : public Vehicle
{
protected:
    int doors;
    float fuelEfficiency;

public:
    Car(string make,string model,int year,int doors,float fuelEfficiency)
        : Vehicle(make,model,year)
    {
        this->doors = doors;
        this->fuelEfficiency = fuelEfficiency;
    }

    void displayCar()
    {
        displayVehicle();
        cout<<"Doors: "<<doors<<endl;
        cout<<"Fuel Efficiency: "<<fuelEfficiency<<" km/l"<<endl;
    }
};

class ElectricCar : public Car
{
    int batteryLife;

public:
    ElectricCar(string make,string model,int year,int doors,float fuelEfficiency,int batteryLife)
        : Car(make,model,year,doors,fuelEfficiency)
    {
        this->batteryLife = batteryLife;
    }

    void display()
    {
        displayCar();
        cout<<"Battery Life: "<<batteryLife<<" km"<<endl;
    }
};

int main()
{
    ElectricCar e("Tesla","Model 2",2024,3,1,350);
    e.display();
}
