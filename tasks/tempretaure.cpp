#include <iostream>
using namespace std;

// Base class P
class P
{
protected:
    float temperature; // temperature in Celsius
public:
    void setTemperature(float temp)
    {
        temperature = temp;
    }
};

// Derived class Q from P
class Q : public P
{
public:
    float toFahrenheit()
    {
        // Formula: Fahrenheit = (Celsius * 9/5) + 32
        return (temperature * 9 / 5) + 32;
    }
};

// Derived class R from Q
class R : public Q
{
public:
    double toKelvin()
    {
        // Formula: Kelvin = (Fahrenheit - 32) * 5/9 + 273.15
        float fahrenheit = toFahrenheit();
        return (fahrenheit - 32) * 5 / 9 + 273.15;
    }
};

int main()
{
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Creating an object of class R
    R obj;
    obj.setTemperature(celsius); // Setting the temperature in Celsius

    // Converting to Fahrenheit
    float fahrenheit = obj.toFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheit << ".F" << endl;

    // Converting to Kelvin
    float kelvin = obj.toKelvin();
    cout << "Temperature in Kelvin: " << kelvin << "K" << endl;

    return 0;
}
