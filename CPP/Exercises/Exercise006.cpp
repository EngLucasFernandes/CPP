#include <iostream>
using namespace std;

int main() {

    double Celsius, Fahrenheit;

    cout << "Enter a temperature in Celsius: ";
    cin >> Celsius;

    Fahrenheit = (Celsius * 1.8) + 32;

    cout << "Temperature in Fahrenheit: " << Fahrenheit;

    return 0;
    
}
