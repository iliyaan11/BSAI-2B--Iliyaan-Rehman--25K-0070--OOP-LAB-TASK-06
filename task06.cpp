#include <iostream>
using namespace std;

class Device {
protected:
    string brand;
    string model;

public:
    Device(string b, string m) {
        brand = b;
        model = m;
    }

    void displayDevice() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Smartphone : virtual public Device {
protected:
    int simSlots;

public:
    Smartphone(string b, string m, int sim) : Device(b, m) {
        simSlots = sim;
    }

    void displaySmartphone() {
        cout << "SIM Slots: " << simSlots << endl;
    }
};

class Tablet : virtual public Device {
protected:
    bool stylusSupport;

public:
    Tablet(string b, string m, bool stylus) : Device(b, m) {
        stylusSupport = stylus;
    }

    void displayTablet() {
        cout << "Stylus Support: " << (stylusSupport ? "Yes" : "No") << endl;
    }
};

class HybridDevice : public Smartphone, public Tablet {
public:
    HybridDevice(string b, string m, int sim, bool stylus)
        : Device(b, m), Smartphone(b, m, sim), Tablet(b, m, stylus) {}

    void displayHybrid() {
        displayDevice();
        displaySmartphone();
        displayTablet();
    }
};

int main() {

    HybridDevice h("TechCorp", "FusionX", 2, true);

    h.displayHybrid();

    return 0;
}