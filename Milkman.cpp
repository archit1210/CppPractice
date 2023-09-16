#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    // Declare variables as double
    double radius, height;
    cin >> radius >> height;

    // Calculate the volume of the cylinder in cubic centimeters
    double volume_cm3 = 3.14 * radius * radius * height;

    // Convert the volume to liters (1 liter = 1000 cm^3)
    double volume_liters = volume_cm3 / 1000.0;

    // Calculate the amount to pay (rate is ₹40 per liter)
    double amount_to_pay = volume_liters * 40.0;

    // Set the precision to 2 decimal places
    cout << fixed << setprecision(2) << amount_to_pay << endl;

    return 0;
}
