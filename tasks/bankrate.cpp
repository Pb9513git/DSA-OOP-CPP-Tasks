#include <iostream>
using namespace std;

// Base class RBI
class RBI {
protected:
    float rate;  // Rate of interest
public:
    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};

// Derived class SBI from RBI
class SBI : public RBI {
public:
    SBI() {
        rate = 6.5;  // SBI's rate of interest
    }
};

// Derived class BOB from RBI
class BOB : public RBI {
public:
    BOB() {
        rate = 7.0;  // BOB's rate of interest
    }
};

// Derived class ICICI from RBI
class ICICI : public RBI {
public:
    ICICI() {
        rate = 7.5;  // ICICI's rate of interest
    }
};

int main() {
    // Creating objects of derived classes
    SBI sbi;
    BOB bob;
    ICICI icici;

    cout << "SBI: ";
    sbi.getROI();  // Printing SBI's rate of interest

    cout << "BOB: ";
    bob.getROI();  // Printing BOB's rate of interest

    cout << "ICICI: ";
    icici.getROI();  // Printing ICICI's rate of interest

    return 0;
}
