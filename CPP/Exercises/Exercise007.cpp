#include <iostream>
using namespace std;

int main() {

    double Fahrenheit, Celsius;

    cout << "Enter a temperature in Fahrenheit: ";
    cin >> Fahrenheit;

    Celsius = (5 * (Fahrenheit - 32)) / 9;

    cout << "Temperature in Celsius: " << Celsius << endl;

    return 0;

}
