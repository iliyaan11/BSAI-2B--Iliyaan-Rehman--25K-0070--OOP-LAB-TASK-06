#include <iostream>
#include <string>
using namespace std;
class Vehicle {
public:
    string brand;
    string modelName;
    int releaseYear;
    Vehicle(string b, string m, int y) : brand(b), modelName(m), releaseYear(y) {}
};
class Car : public Vehicle {
public:
    int doorCount;
    double fuelEconomy;
    Car(string b, string m, int y, int d, double f) 
        : Vehicle(b, m, y), doorCount(d), fuelEconomy(f) {}
};
class ElectricCar : public Car {
public:
    int batteryCapacity;
    ElectricCar(string b, string m, int y, int d, double f, int bat)
        : Car(b, m, y, d, f), batteryCapacity(bat) {}
    void showSpecs() {
        cout << "\n--- Electric Vehicle Specs ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << modelName << endl;
        cout << "Year: " << releaseYear << endl;
        cout << "Doors: " << doorCount << endl;
        cout << "Efficiency: " << fuelEconomy << " MPGe" << endl;
        cout << "Battery: " << batteryCapacity << " kWh" << endl;
    }
};
int main() {
    string b, m;
    int y, d, bat;
    double f;
    cout << "Enter Vehicle Make: ";
    getline(cin, b);
    cout << "Enter Model: ";
    getline(cin, m);
    cout << "Enter Year: ";
    cin >> y;
    cout << "Enter Number of Doors: ";
    cin >> d;
    cout << "Enter Fuel Efficiency: ";
    cin >> f;
    cout << "Enter Battery Capacity (kWh): ";
    cin >> bat;
    ElectricCar myEv(b, m, y, d, f, bat);
    myEv.showSpecs();
    return 0;
}
