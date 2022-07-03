#include <iostream>
using namespace std;

int main() {

    int numbers[3];

    cout << "Enter the first integer number: ";
    cin >> numbers[0];

    cout << "Enter the second integer number: ";
    cin >> numbers[1];

    cout << "Enter the third integer number: ";
    cin >> numbers[2];

    cout << "Sum: " << numbers[0] + numbers[1] + numbers[2] << endl;

    return 0;
}